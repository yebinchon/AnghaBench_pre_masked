
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef int vm_offset_t ;
struct vm_map {int dummy; } ;
struct sf_buf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sf_buf* FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct vm_map*,int ,int ,int,int *,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static struct sf_buf *
FUNC_3(struct vm_map *VAR_4, vm_offset_t VAR_5)
{
 struct sf_buf *VAR_6;
 vm_page_t VAR_7;

 if (FUNC_1(VAR_4, VAR_5, VAR_0, VAR_2 |
     VAR_3, &VAR_7, 1) < 0)
  return (((void*)0));
 VAR_6 = FUNC_0(VAR_7, VAR_1);
 if (VAR_6 == ((void*)0)) {
  FUNC_2(VAR_7);
  return (((void*)0));
 }
 return (VAR_6);
}
