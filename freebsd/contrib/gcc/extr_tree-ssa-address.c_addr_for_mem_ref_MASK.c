
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_address {scalar_t__ index; scalar_t__ base; scalar_t__ symbol; scalar_t__ offset; scalar_t__ step; } ;
struct mem_addr_template {void* ref; void** off_p; void** step_p; } ;
typedef void* rtx ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,void*,void*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 void* VAR_4 ;
 int VAR_5 ;
 void* FUNC_4 (scalar_t__,void*,int ,int ) ;
 int FUNC_5 (void*,void*,void*,void*,void*,void**,void***,void***) ;
 void* FUNC_6 (int ,scalar_t__) ;
 void* FUNC_7 (int ,int ) ;
 int FUNC_8 (char*) ;
 void* FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 struct mem_addr_template* VAR_6 ;

rtx
FUNC_12 (struct mem_address *VAR_7, bool VAR_8)
{
  rtx VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
  static bool VAR_15 = 0;
  struct mem_addr_template *VAR_16;

  if (VAR_7->step && !FUNC_10 (VAR_7->step))
    VAR_13 = FUNC_9 (FUNC_2 (VAR_7->step),
        FUNC_1 (VAR_7->step), VAR_3);
  else
    VAR_13 = VAR_2;

  if (VAR_7->offset && !FUNC_11 (VAR_7->offset))
    VAR_14 = FUNC_9 (FUNC_2 (VAR_7->offset),
         FUNC_1 (VAR_7->offset), VAR_3);
  else
    VAR_14 = VAR_2;

  if (!VAR_8)
    {

      if (!VAR_15)
 {
   unsigned VAR_17;

   VAR_15 = 1;
   VAR_10 = FUNC_7 (VAR_3, FUNC_8 ("test_symbol"));
   VAR_11 = FUNC_6 (VAR_3, VAR_1 + 1);
   VAR_12 = FUNC_6 (VAR_3, VAR_1 + 2);

   for (VAR_17 = 0; VAR_17 < 32; VAR_17++)
     FUNC_5 ((VAR_17 & 16 ? VAR_10 : VAR_2),
     (VAR_17 & 8 ? VAR_11 : VAR_2),
     (VAR_17 & 4 ? VAR_12 : VAR_2),
     (VAR_17 & 2 ? VAR_4 : VAR_2),
     (VAR_17 & 1 ? VAR_4 : VAR_2),
     &VAR_6[VAR_17].ref,
     &VAR_6[VAR_17].step_p,
     &VAR_6[VAR_17].off_p);
 }

      VAR_16 = VAR_6 + FUNC_0 (VAR_7->symbol, VAR_7->base, VAR_7->index,
         VAR_13, VAR_14);
      if (VAR_13)
 *VAR_16->step_p = VAR_13;
      if (VAR_14)
 *VAR_16->off_p = VAR_14;

      return VAR_16->ref;
    }


  VAR_10 = (VAR_7->symbol
  ? FUNC_4 (FUNC_3 (VAR_7->symbol, VAR_5),
   VAR_2, VAR_3, VAR_0)
  : VAR_2);
  VAR_11 = (VAR_7->base
  ? FUNC_4 (VAR_7->base, VAR_2, VAR_3, VAR_0)
  : VAR_2);
  VAR_12 = (VAR_7->index
  ? FUNC_4 (VAR_7->index, VAR_2, VAR_3, VAR_0)
  : VAR_2);

  FUNC_5 (VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, &VAR_9, ((void*)0), ((void*)0));
  return VAR_9;
}
