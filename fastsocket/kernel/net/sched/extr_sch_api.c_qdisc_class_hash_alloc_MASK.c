
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hlist_head {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hlist_head*) ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (unsigned int) ;
 struct hlist_head* FUNC_3 (unsigned int,int ) ;

__attribute__((used)) static struct hlist_head *FUNC_4(unsigned int VAR_2)
{
 unsigned int VAR_3 = VAR_2 * sizeof(struct hlist_head), VAR_4;
 struct hlist_head *VAR_5;

 if (VAR_3 <= VAR_1)
  VAR_5 = FUNC_3(VAR_3, VAR_0);
 else
  VAR_5 = (struct hlist_head *)
   FUNC_1(VAR_0, FUNC_2(VAR_3));

 if (VAR_5 != ((void*)0)) {
  for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
   FUNC_0(&VAR_5[VAR_4]);
 }
 return VAR_5;
}
