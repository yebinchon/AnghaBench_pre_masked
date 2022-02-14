
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pax {TYPE_1__* sparse_tail; } ;
typedef scalar_t__ int64_t ;
struct TYPE_2__ {scalar_t__ offset; scalar_t__ remaining; } ;


 int VAR_0 ;
 int FUNC_0 (struct pax*,scalar_t__,scalar_t__,int) ;

__attribute__((used)) static int
FUNC_1(struct pax *VAR_1, int64_t VAR_2, int64_t VAR_3)
{
 int64_t VAR_4;
 int VAR_5;

 if (VAR_1->sparse_tail == ((void*)0))
  VAR_4 = 0;
 else {
  VAR_4 = VAR_1->sparse_tail->offset +
      VAR_1->sparse_tail->remaining;
 }
 if (VAR_4 < VAR_2) {

  VAR_5 = FUNC_0(VAR_1, VAR_4,
      VAR_2 - VAR_4, 1);
  if (VAR_5 != VAR_0)
   return (VAR_5);
 }

 return (FUNC_0(VAR_1, VAR_2, VAR_3, 0));
}
