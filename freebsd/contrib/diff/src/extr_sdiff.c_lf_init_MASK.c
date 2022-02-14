
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line_filter {char* bufpos; char* buffer; char* buflim; int * infile; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (scalar_t__) ;

__attribute__((used)) static void
FUNC_1 (struct line_filter *VAR_1, FILE *VAR_2)
{
  VAR_1->infile = VAR_2;
  VAR_1->bufpos = VAR_1->buffer = VAR_1->buflim = FUNC_0 (VAR_0 + 1);
  VAR_1->buflim[0] = '\n';
}
