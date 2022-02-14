
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct tlsv1_server {int status_request_v2; } ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (struct tlsv1_server*,int const*,int) ;

__attribute__((used)) static void FUNC_2(struct tlsv1_server *VAR_0,
       const u8 *VAR_1, size_t VAR_2)
{
 const u8 *VAR_3, *VAR_4;

 VAR_0->status_request_v2 = 1;

 VAR_3 = VAR_1;
 VAR_4 = VAR_1 + VAR_2;
 while (VAR_4 - VAR_3 >= 2) {
  u16 VAR_5;

  VAR_5 = FUNC_0(VAR_3);
  VAR_3 += 2;
  if (VAR_5 > VAR_4 - VAR_3)
   break;
  FUNC_1(VAR_0, VAR_3, VAR_5);
  VAR_3 += VAR_5;
 }
}
