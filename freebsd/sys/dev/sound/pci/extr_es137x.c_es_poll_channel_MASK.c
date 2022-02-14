
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct es_info {int dummy; } ;
struct es_chinfo {scalar_t__ active; scalar_t__ dir; scalar_t__ index; int blksz; int blkcnt; int ptr; int prevptr; struct es_info* parent; int * channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct es_info*,int,int) ;
 int FUNC_1 (struct es_info*,int ,int,int) ;

__attribute__((used)) static __inline int
FUNC_2(struct es_chinfo *VAR_6)
{
 struct es_info *VAR_7;
 uint32_t VAR_8, VAR_9;
 uint32_t VAR_10, VAR_11;

 if (VAR_6 == ((void*)0) || VAR_6->channel == ((void*)0) || VAR_6->active == 0)
  return (0);

 VAR_7 = VAR_6->parent;
 if (VAR_6->dir == VAR_5) {
  if (VAR_6->index == VAR_4)
   VAR_10 = VAR_1;
  else
   VAR_10 = VAR_2;
 } else
  VAR_10 = VAR_0;
 VAR_8 = VAR_6->blksz * VAR_6->blkcnt;
 FUNC_1(VAR_7, VAR_3, VAR_10 >> 8, 4);
 VAR_11 = FUNC_0(VAR_7, VAR_10 & 0x000000ff, 4) >> 16;
 VAR_11 <<= 2;
 VAR_6->ptr = VAR_11;
 VAR_11 %= VAR_8;
 VAR_11 &= ~(VAR_6->blksz - 1);
 VAR_9 = (VAR_8 + VAR_11 - VAR_6->prevptr) % VAR_8;

 if (VAR_9 < VAR_6->blksz)
  return (0);

 VAR_6->prevptr = VAR_11;

 return (1);
}
