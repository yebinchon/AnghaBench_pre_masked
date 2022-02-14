
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hlist_head {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hlist_head*) ;
 int VAR_1 ;
 struct hlist_head* FUNC_1 (int,int ) ;

__attribute__((used)) static struct hlist_head *FUNC_2(void)
{
 int VAR_2;
 struct hlist_head *VAR_3;

 VAR_3 = FUNC_1(sizeof(*VAR_3) * VAR_1, VAR_0);
 if (VAR_3 != ((void*)0))
  for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
   FUNC_0(&VAR_3[VAR_2]);

 return VAR_3;
}
