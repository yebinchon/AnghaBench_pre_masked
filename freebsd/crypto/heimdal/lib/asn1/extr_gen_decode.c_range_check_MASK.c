
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct range {int min; int max; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char const*,char const*,int,char const*) ;

__attribute__((used)) static void
FUNC_1(const char *VAR_1,
     const char *VAR_2,
     const char *VAR_3,
     struct range *VAR_4)
{
    if (VAR_4->min == VAR_4->max + 2 || VAR_4->min < VAR_4->max)
 FUNC_0 (VAR_0,
   "if ((%s)->%s > %d) {\n"
   "e = ASN1_MAX_CONSTRAINT; %s;\n"
   "}\n",
   VAR_1, VAR_2, VAR_4->max, VAR_3);
    if (VAR_4->min - 1 == VAR_4->max || VAR_4->min < VAR_4->max)
 FUNC_0 (VAR_0,
   "if ((%s)->%s < %d) {\n"
   "e = ASN1_MIN_CONSTRAINT; %s;\n"
   "}\n",
   VAR_1, VAR_2, VAR_4->min, VAR_3);
    if (VAR_4->max == VAR_4->min)
 FUNC_0 (VAR_0,
   "if ((%s)->%s != %d) {\n"
   "e = ASN1_EXACT_CONSTRAINT; %s;\n"
   "}\n",
   VAR_1, VAR_2, VAR_4->min, VAR_3);
}
