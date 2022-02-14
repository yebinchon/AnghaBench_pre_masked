
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tlsv1_server {int rl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *,int ,int *,size_t,int const*,size_t,size_t*) ;
 int FUNC_1 (struct tlsv1_server*,int ,int ) ;
 int FUNC_2 (int ,char*,int const*,size_t) ;
 int FUNC_3 (int ,char*) ;

int FUNC_4(struct tlsv1_server *VAR_5,
    const u8 *VAR_6, size_t VAR_7,
    u8 *VAR_8, size_t VAR_9)
{
 size_t VAR_10;

 FUNC_2(VAR_1, "TLSv1: Plaintext AppData",
   VAR_6, VAR_7);

 if (FUNC_0(&VAR_5->rl, VAR_4,
         VAR_8, VAR_9, VAR_6, VAR_7, &VAR_10) < 0) {
  FUNC_3(VAR_0, "TLSv1: Failed to create a record");
  FUNC_1(VAR_5, VAR_3,
       VAR_2);
  return -1;
 }

 return VAR_10;
}
