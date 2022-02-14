
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roffreq {int tok; } ;
struct ohash {int dummy; } ;
typedef enum roff_tok { ____Placeholder_roff_tok } roff_tok ;


 int VAR_0 ;
 struct roffreq* FUNC_0 (struct ohash*,int ) ;
 int FUNC_1 (struct ohash*,char const*) ;
 int FUNC_2 (struct ohash*,char const*,char const**) ;

enum roff_tok
FUNC_3(struct ohash *VAR_1, const char *VAR_2, size_t VAR_3)
{
 struct roffreq *VAR_4;
 const char *VAR_5;

 if (VAR_3) {
  VAR_5 = VAR_2 + VAR_3;
  VAR_4 = FUNC_0(VAR_1, FUNC_2(VAR_1, VAR_2, &VAR_5));
 } else
  VAR_4 = FUNC_0(VAR_1, FUNC_1(VAR_1, VAR_2));
 return VAR_4 == ((void*)0) ? VAR_0 : VAR_4->tok;
}
