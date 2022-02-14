
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct unwind_idx {int offset; } ;
struct search_context {int * exidx_end; int * exidx_start; scalar_t__ addr; } ;
typedef int sc ;
typedef scalar_t__ int32_t ;
typedef int * caddr_t ;


 int FUNC_0 (struct search_context*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,struct search_context*) ;
 int VAR_2 ;

__attribute__((used)) static struct unwind_idx *
FUNC_3(uint32_t VAR_3, int VAR_4)
{
 struct search_context VAR_5;
 caddr_t VAR_6, VAR_7;
 unsigned int VAR_8, VAR_9, VAR_10;
 struct unwind_idx *VAR_11;
 struct unwind_idx *VAR_12;
 int32_t VAR_13;
 uint32_t VAR_14;

 VAR_11 = (struct unwind_idx *)&VAR_1;
 VAR_6 = (caddr_t)&VAR_1;
 VAR_7 = (caddr_t)&VAR_0;


 if (VAR_4) {
  FUNC_0(&VAR_5, sizeof(VAR_5));
  VAR_5.addr = VAR_3;
  if (FUNC_2(VAR_2, &VAR_5) != 0 &&
     VAR_5.exidx_start != ((void*)0) && VAR_5.exidx_end != ((void*)0)) {
   VAR_11 = (struct unwind_idx *)VAR_5.exidx_start;
   VAR_6 = VAR_5.exidx_start;
   VAR_7 = VAR_5.exidx_end;
  }
 }

 VAR_8 = 0;
 VAR_10 = (VAR_7 - VAR_6) / sizeof(struct unwind_idx);

 while (VAR_8 != VAR_10) {
  VAR_9 = VAR_8 + (VAR_10 - VAR_8 + 1) / 2;

  VAR_12 = &VAR_11[VAR_9];

  VAR_13 = FUNC_1(VAR_12->offset);
  VAR_14 = (uint32_t)&VAR_12->offset + VAR_13;

  if (VAR_14 <= VAR_3) {
   VAR_8 = VAR_9;
  } else {
   VAR_10 = VAR_9 - 1;
  }
 }

 return &VAR_11[VAR_8];
}
