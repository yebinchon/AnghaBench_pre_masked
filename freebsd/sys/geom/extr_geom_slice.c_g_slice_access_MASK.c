
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct g_slicer {size_t nslice; struct g_slice* slices; } ;
struct g_slice {scalar_t__ length; scalar_t__ offset; struct g_provider* provider; } ;
struct g_provider {size_t index; scalar_t__ acw; scalar_t__ ace; struct g_geom* geom; } ;
struct g_geom {int flags; struct g_slicer* softc; int consumer; } ;
struct g_consumer {scalar_t__ acr; scalar_t__ acw; int ace; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 struct g_consumer* FUNC_1 (int *) ;
 int FUNC_2 (struct g_consumer*,int,int,int) ;
 int FUNC_3 (struct g_geom*) ;

__attribute__((used)) static int
FUNC_4(struct g_provider *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6;
 u_int VAR_7;
 struct g_geom *VAR_8;
 struct g_consumer *VAR_9;
 struct g_provider *VAR_10;
 struct g_slicer *VAR_11;
 struct g_slice *VAR_12, *VAR_13;

 VAR_8 = VAR_2->geom;
 VAR_9 = FUNC_1(&VAR_8->consumer);
 FUNC_0 (VAR_9 != ((void*)0), ("g_slice_access but no consumer"));
 VAR_11 = VAR_8->softc;
 if (VAR_3 > 0 || VAR_4 > 0 || VAR_5 > 0) {
  VAR_12 = &VAR_11->slices[VAR_2->index];
  for (VAR_7 = 0; VAR_7 < VAR_11->nslice; VAR_7++) {
   VAR_13 = &VAR_11->slices[VAR_7];
   if (VAR_13->length == 0)
    continue;
   if (VAR_7 == VAR_2->index)
    continue;
   if (VAR_12->offset + VAR_12->length <= VAR_13->offset)
    continue;
   if (VAR_13->offset + VAR_13->length <= VAR_12->offset)
    continue;

   VAR_10 = VAR_13->provider;
   if ((VAR_2->acw + VAR_4) > 0 && VAR_10->ace > 0)
    return (VAR_0);
   if ((VAR_2->ace + VAR_5) > 0 && VAR_10->acw > 0)
    return (VAR_0);
  }
 }

 if (VAR_9->acr == 0 && VAR_9->acw == 0 && VAR_9->ace == 0)
  VAR_5++;

 if ((VAR_9->acr + VAR_3) == 0 && (VAR_9->acw + VAR_4) == 0 && (VAR_9->ace + VAR_5) == 1)
  VAR_5--;
 VAR_6 = FUNC_2(VAR_9, VAR_3, VAR_4, VAR_5);





 if (VAR_6 == 0 && (VAR_8->flags & VAR_1) != 0 &&
     (VAR_9->acr + VAR_9->acw + VAR_9->ace) == 0)
  FUNC_3(VAR_8);

 return (VAR_6);
}
