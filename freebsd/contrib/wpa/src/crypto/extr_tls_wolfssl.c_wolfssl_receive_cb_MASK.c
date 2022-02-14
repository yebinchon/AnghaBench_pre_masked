
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_in_data {size_t consumed; int in_data; } ;
typedef int WOLFSSL ;


 int FUNC_0 (char*,size_t,size_t) ;
 size_t FUNC_1 (int ) ;
 size_t FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(WOLFSSL *VAR_0, char *VAR_1, int VAR_2, void *VAR_3)
{
 size_t VAR_4 = VAR_2;
 struct tls_in_data *VAR_5 = VAR_3;

 if (!VAR_5)
  return -1;

 if (VAR_4 > (FUNC_2(VAR_5->in_data) - VAR_5->consumed))
  VAR_4 = FUNC_2(VAR_5->in_data) - VAR_5->consumed;

 FUNC_0(VAR_1, FUNC_1(VAR_5->in_data) + VAR_5->consumed, VAR_4);
 VAR_5->consumed += VAR_4;

 if (VAR_4 == 0)
  return -2;

 return (int) VAR_4;
}
