
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct es_info {scalar_t__ polling; } ;
struct es_chinfo {int ptr; scalar_t__ dir; scalar_t__ index; struct es_info* parent; } ;
typedef int kobj_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct es_info*) ;
 int FUNC_1 (struct es_info*) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (struct es_info*,int,int) ;
 int FUNC_3 (struct es_info*,int ,int,int) ;

__attribute__((used)) static uint32_t
FUNC_4(kobj_t VAR_7, void *VAR_8)
{
 struct es_chinfo *VAR_9 = VAR_8;
 struct es_info *VAR_10 = VAR_9->parent;
 uint32_t VAR_11, VAR_12;

 FUNC_0(VAR_10);
 if (VAR_10->polling != 0)
  VAR_12 = VAR_9->ptr;
 else {
  if (VAR_9->dir == VAR_6) {
   if (VAR_9->index == VAR_5)
    VAR_11 = VAR_1;
   else
    VAR_11 = VAR_2;
  } else
   VAR_11 = VAR_0;
  FUNC_3(VAR_10, VAR_3, VAR_11 >> 8, 4);
  VAR_12 = FUNC_2(VAR_10, VAR_11 & 0x000000ff, 4) >> 16;

  VAR_12 <<= 2;
 }
 FUNC_1(VAR_10);

 VAR_12 &= VAR_4;

 return (VAR_12);
}
