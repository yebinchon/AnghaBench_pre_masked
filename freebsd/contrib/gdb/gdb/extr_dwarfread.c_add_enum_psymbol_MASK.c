
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objfile {int static_psymbols; } ;
struct dieinfo {char* at_element_list; scalar_t__ short_element_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct objfile*) ;
 int VAR_4 ;
 int FUNC_1 (char*,scalar_t__,int ,int ,int *,int ,int ,int ,struct objfile*) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (char*) ;
 unsigned short FUNC_4 (char*,int,int ,struct objfile*) ;

__attribute__((used)) static void
FUNC_5 (struct dieinfo *VAR_6, struct objfile *VAR_7)
{
  char *VAR_8;
  char *VAR_9;
  unsigned short VAR_10;
  int VAR_11;

  VAR_8 = VAR_6->at_element_list;
  if (VAR_8 != ((void*)0))
    {
      if (VAR_6->short_element_list)
 {
   VAR_11 = FUNC_2 (VAR_1);
 }
      else
 {
   VAR_11 = FUNC_2 (VAR_0);
 }
      VAR_10 = FUNC_4 (VAR_8, VAR_11, VAR_2, VAR_7);
      VAR_8 += VAR_11;
      VAR_9 = VAR_8 + VAR_10;
      while (VAR_8 < VAR_9)
 {
   VAR_8 += FUNC_0 (VAR_7);
   FUNC_1 (VAR_8, FUNC_3 (VAR_8), VAR_4, VAR_3,
          &VAR_7->static_psymbols, 0, 0, VAR_5,
          VAR_7);
   VAR_8 += FUNC_3 (VAR_8) + 1;
 }
    }
}
