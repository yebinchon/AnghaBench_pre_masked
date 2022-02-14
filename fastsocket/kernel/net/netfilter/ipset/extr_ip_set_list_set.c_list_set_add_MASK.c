
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct set_elem {scalar_t__ id; } ;
struct list_set {int size; int timeout; } ;
typedef int ip_set_id_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct list_set*,int,int ) ;
 int FUNC_3 (struct list_set*,int,int ,int ) ;
 struct set_elem* FUNC_4 (struct list_set*,int) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct list_set *VAR_1, u32 VAR_2, ip_set_id_t VAR_3,
      unsigned long VAR_4)
{
 const struct set_elem *VAR_5 = FUNC_4(VAR_1, VAR_2);

 if (VAR_2 == VAR_1->size - 1 && VAR_5->id != VAR_0)

  FUNC_0(VAR_5->id);
 if (FUNC_5(VAR_1->timeout))
  FUNC_3(VAR_1, VAR_2, VAR_3, FUNC_1(VAR_4));
 else
  FUNC_2(VAR_1, VAR_2, VAR_3);

 return 0;
}
