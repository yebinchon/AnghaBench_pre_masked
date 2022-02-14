
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inotify_handle {int idr; int count; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct inotify_handle*) ;

__attribute__((used)) static inline void FUNC_3(struct inotify_handle *VAR_0)
{
 if (FUNC_0(&VAR_0->count)) {
  FUNC_1(&VAR_0->idr);
  FUNC_2(VAR_0);
 }
}
