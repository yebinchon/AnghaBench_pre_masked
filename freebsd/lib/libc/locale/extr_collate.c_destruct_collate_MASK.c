
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlocale_collate {scalar_t__ maplen; scalar_t__ map; } ;


 int FUNC_0 (void*) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0)
{
 struct xlocale_collate *VAR_1 = VAR_0;
 if (VAR_1->map && (VAR_1->maplen > 0)) {
  (void) FUNC_1(VAR_1->map, VAR_1->maplen);
 }
 FUNC_0(VAR_0);
}
