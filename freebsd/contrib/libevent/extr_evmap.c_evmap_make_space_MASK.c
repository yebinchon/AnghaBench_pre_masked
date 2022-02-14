
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_signal_map {int nentries; void** entries; } ;


 int FUNC_0 (void**,int ,int) ;
 scalar_t__ FUNC_1 (void**,int) ;

__attribute__((used)) static int
FUNC_2(struct event_signal_map *VAR_0, int VAR_1, int VAR_2)
{
 if (VAR_0->nentries <= VAR_1) {
  int VAR_3 = VAR_0->nentries ? VAR_0->nentries : 32;
  void **VAR_4;

  while (VAR_3 <= VAR_1)
   VAR_3 <<= 1;

  VAR_4 = (void **)FUNC_1(VAR_0->entries, VAR_3 * VAR_2);
  if (VAR_4 == ((void*)0))
   return (-1);

  FUNC_0(&VAR_4[VAR_0->nentries], 0,
      (VAR_3 - VAR_0->nentries) * VAR_2);

  VAR_0->nentries = VAR_3;
  VAR_0->entries = VAR_4;
 }

 return (0);
}
