
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct invariant {scalar_t__ eqto; scalar_t__ invno; scalar_t__ move; } ;


 scalar_t__ FUNC_0 (int ,int ,unsigned int,struct invariant*) ;
 int FUNC_1 (struct invariant*,unsigned int*,unsigned int,unsigned int,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_2 (struct invariant **VAR_2, unsigned *VAR_3,
    unsigned VAR_4, unsigned VAR_5,
    unsigned VAR_6)
{
  struct invariant *VAR_7;
  int VAR_8 = 0, VAR_9;
  unsigned VAR_10, VAR_11;

  for (VAR_11 = 0; FUNC_0 (VAR_0, VAR_1, VAR_11, VAR_7); VAR_11++)
    {
      if (VAR_7->move)
 continue;


      if (VAR_7->eqto != VAR_7->invno)
 continue;

      VAR_9 = FUNC_1 (VAR_7, &VAR_10,
      VAR_4, VAR_5, VAR_6);
      if (VAR_9 > VAR_8)
 {
   VAR_8 = VAR_9;
   *VAR_2 = VAR_7;
   *VAR_3 = VAR_10;
 }
    }

  return VAR_8;
}
