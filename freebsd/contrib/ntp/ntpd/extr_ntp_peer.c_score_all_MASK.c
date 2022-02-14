
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct peer {int flags; struct peer* p_link; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct peer* VAR_2 ;
 int FUNC_1 (struct peer*) ;

int
FUNC_2(
 struct peer *VAR_3
 )
{
 struct peer *VAR_4;
 int VAR_5, VAR_6;
 int VAR_7;






 VAR_6 = FUNC_1(VAR_3);
 VAR_5 = 100;
 for (VAR_4 = VAR_2; VAR_4 != ((void*)0); VAR_4 = VAR_4->p_link)
  if (VAR_4->flags & VAR_0) {
   VAR_7 = FUNC_1(VAR_4);
   if (VAR_7 < VAR_5)
    VAR_5 = VAR_7;
  }
 FUNC_0(1, ("score_all: at %lu score %d min %d\n",
      VAR_1, VAR_6, VAR_5));

 if (VAR_6 != VAR_5)
  VAR_5 = 0;

 return VAR_5;
}
