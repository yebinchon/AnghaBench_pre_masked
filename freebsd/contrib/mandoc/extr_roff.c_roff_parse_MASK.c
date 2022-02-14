
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roff {int rentab; int strtab; int reqtab; int current_string; } ;
typedef enum roff_tok { ____Placeholder_roff_tok } roff_tok ;



 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (struct roff*,char**,int,int) ;
 int FUNC_1 (struct roff*,char const*,size_t,int*) ;
 int FUNC_2 (int *,char const*,size_t,char*,int ,int ) ;
 int FUNC_3 (int ,char const*,size_t) ;

__attribute__((used)) static enum roff_tok
FUNC_4(struct roff *VAR_4, char *VAR_5, int *VAR_6, int VAR_7, int VAR_8)
{
 char *VAR_9;
 const char *VAR_10;
 size_t VAR_11;
 int VAR_12;
 enum roff_tok VAR_13;

 VAR_9 = VAR_5 + *VAR_6;

 if ('\0' == *VAR_9 || '"' == *VAR_9 || '\t' == *VAR_9 || ' ' == *VAR_9)
  return VAR_3;

 VAR_10 = VAR_9;
 VAR_11 = FUNC_0(VAR_4, &VAR_9, VAR_7, VAR_8);

 VAR_12 = 128 | 129;
 VAR_4->current_string = FUNC_1(VAR_4, VAR_10, VAR_11, &VAR_12);
 switch (VAR_12) {
 case 128:
  VAR_13 = VAR_2;
  break;
 case 129:
  VAR_13 = VAR_1;
  break;
 default:
  VAR_13 = FUNC_3(VAR_4->reqtab, VAR_10, VAR_11);
  break;
 }
 if (VAR_13 != VAR_3)
  *VAR_6 = VAR_9 - VAR_5;
 else if (VAR_12 == VAR_0) {

  FUNC_2(&VAR_4->strtab, VAR_10, VAR_11, "", 0, 0);
  FUNC_2(&VAR_4->rentab, VAR_10, VAR_11, ((void*)0), 0, 0);
 }
 return VAR_13;
}
