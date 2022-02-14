
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fmt {char* width; int label; } ;
struct bsdstat {unsigned char* fmts; struct fmt* stats; } ;
typedef int FILE ;


 unsigned char const VAR_0 ;
 int FUNC_0 (int *,char*,char*,int ) ;
 int FUNC_1 (unsigned char const,int *) ;

__attribute__((used)) static void
FUNC_2(struct bsdstat *VAR_1, FILE *VAR_2)
{
 const unsigned char *VAR_3;
 int VAR_4;
 const struct fmt *VAR_5;

 for (VAR_3 = VAR_1->fmts; *VAR_3 != '\0'; VAR_3++) {
  if (*VAR_3 == VAR_0) {
   VAR_4 = *(++VAR_3);
   VAR_4 |= ((int) *(++VAR_3)) << 8;
   VAR_5 = &VAR_1->stats[VAR_4];
   FUNC_0(VAR_2, "%*s", VAR_5->width, VAR_5->label);
  } else
   FUNC_1(*VAR_3, VAR_2);
 }
 FUNC_1('\n', VAR_2);
}
