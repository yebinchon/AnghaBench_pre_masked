
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line_filter {char* buffer; char* bufpos; char* buflim; int infile; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 size_t FUNC_1 (char*,int ,int ) ;

__attribute__((used)) static size_t
FUNC_2 (struct line_filter *VAR_1)
{
  size_t VAR_2 = FUNC_1 (VAR_1->buffer, VAR_0, VAR_1->infile);
  VAR_1->bufpos = VAR_1->buffer;
  VAR_1->buflim = VAR_1->buffer + VAR_2;
  VAR_1->buflim[0] = '\n';
  FUNC_0 ();
  return VAR_2;
}
