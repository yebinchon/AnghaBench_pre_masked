
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fmt {char* width; } ;
struct bsdstat {unsigned char* fmts; scalar_t__ (* get_totstat ) (struct bsdstat*,int,char*,int) ;struct fmt* stats; } ;
typedef int buf ;
typedef int FILE ;


 unsigned char const VAR_0 ;
 int FUNC_0 (int *,char*,char*,char*) ;
 int FUNC_1 (unsigned char const,int *) ;
 scalar_t__ FUNC_2 (struct bsdstat*,int,char*,int) ;

__attribute__((used)) static void
FUNC_3(struct bsdstat *VAR_1, FILE *VAR_2)
{
 char VAR_3[32];
 const unsigned char *VAR_4;
 const struct fmt *VAR_5;
 int VAR_6;

 for (VAR_4 = VAR_1->fmts; *VAR_4 != '\0'; VAR_4++) {
  if (*VAR_4 == VAR_0) {
   VAR_6 = *(++VAR_4);
   VAR_6 |= ((int) *(++VAR_4)) << 8;
   VAR_5 = &VAR_1->stats[VAR_6];
   if (VAR_1->get_totstat(VAR_1, VAR_6, VAR_3, sizeof(VAR_3)))
    FUNC_0(VAR_2, "%*s", VAR_5->width, VAR_3);
  } else
   FUNC_1(*VAR_4, VAR_2);
 }
 FUNC_1('\n', VAR_2);
}
