
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct via_info {struct via_chinfo* rch; struct via_chinfo* pch; } ;
struct via_chinfo {scalar_t__ active; int blksz; int buffer; int * channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct via_info *VAR_4)
{
 struct via_chinfo *VAR_5;
 int VAR_6;
 int VAR_7 = VAR_3;
 int VAR_8;

 for (VAR_6 = 0; VAR_6 < VAR_0 + VAR_1; VAR_6++) {
  VAR_5 = &VAR_4->pch[VAR_6];
  if (VAR_5->channel == ((void*)0) || VAR_5->active == 0)
   continue;
  VAR_8 = ((uint64_t)VAR_3 * VAR_5->blksz) /
      ((uint64_t)FUNC_0(VAR_5->buffer) *
      FUNC_1(VAR_5->buffer));
  VAR_8 >>= 2;
  if (VAR_8 > VAR_3)
   VAR_8 = VAR_3;
  if (VAR_8 < 1)
   VAR_8 = 1;
  if (VAR_8 < VAR_7)
   VAR_7 = VAR_8;
 }

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_5 = &VAR_4->rch[VAR_6];
  if (VAR_5->channel == ((void*)0) || VAR_5->active == 0)
   continue;
  VAR_8 = ((uint64_t)VAR_3 * VAR_5->blksz) /
      ((uint64_t)FUNC_0(VAR_5->buffer) *
      FUNC_1(VAR_5->buffer));
  VAR_8 >>= 2;
  if (VAR_8 > VAR_3)
   VAR_8 = VAR_3;
  if (VAR_8 < 1)
   VAR_8 = 1;
  if (VAR_8 < VAR_7)
   VAR_7 = VAR_8;
 }

 return (VAR_7);
}
