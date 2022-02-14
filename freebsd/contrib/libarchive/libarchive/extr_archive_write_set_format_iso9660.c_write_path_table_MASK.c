
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vdd {int max_depth; } ;
struct archive_write {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct archive_write*,int,int,struct vdd*) ;
 int FUNC_1 (struct archive_write*,size_t) ;

__attribute__((used)) static int
FUNC_2(struct archive_write *VAR_2, int VAR_3, struct vdd *VAR_4)
{
 int VAR_5, VAR_6;
 size_t VAR_7;

 VAR_6 = VAR_0;
 VAR_7 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_4->max_depth; VAR_5++) {
  VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_5, VAR_4);
  if (VAR_6 < 0)
   return (VAR_6);
  VAR_7 += VAR_6;
 }


 VAR_7 = VAR_7 % VAR_1;
 if (VAR_7 > 0)
  VAR_6 = FUNC_1(VAR_2, VAR_1 - VAR_7);
 return (VAR_6);
}
