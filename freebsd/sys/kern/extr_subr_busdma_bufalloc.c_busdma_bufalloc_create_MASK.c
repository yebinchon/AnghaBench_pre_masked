
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * uma_free ;
typedef int * uma_alloc ;
typedef int uintmax_t ;
typedef int u_int32_t ;
struct busdma_bufzone {int size; int * umazone; int name; } ;
struct busdma_bufalloc {int min_size; int num_zones; struct busdma_bufzone* buf_zones; } ;
typedef struct busdma_bufalloc* busdma_bufalloc_t ;
typedef int bus_size_t ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct busdma_bufalloc*) ;
 struct busdma_bufalloc* FUNC_2 (int,int ,int) ;
 int FUNC_3 (struct busdma_bufzone*) ;
 int FUNC_4 (int ,int,char*,char const*,int ) ;
 int * FUNC_5 (int ,int,int *,int *,int *,int *,int,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;

busdma_bufalloc_t
FUNC_8(const char *VAR_5, bus_size_t VAR_6,
    uma_alloc VAR_7, uma_free VAR_8, u_int32_t VAR_9)
{
 struct busdma_bufalloc *VAR_10;
 struct busdma_bufzone *VAR_11;
 int VAR_12;
 bus_size_t VAR_13;

 VAR_10 = FUNC_2(sizeof(struct busdma_bufalloc), VAR_2,
     VAR_4 | VAR_3);

 VAR_10->min_size = FUNC_0(VAR_1, VAR_6);
 for (VAR_12 = 0, VAR_11 = VAR_10->buf_zones, VAR_13 = VAR_10->min_size;
     VAR_12 < FUNC_3(VAR_10->buf_zones) && VAR_13 <= VAR_0;
     ++VAR_12, ++VAR_11, VAR_13 <<= 1) {
  FUNC_4(VAR_11->name, sizeof(VAR_11->name), "dma %.10s %ju",
      VAR_5, (uintmax_t)VAR_13);
  VAR_11->size = VAR_13;
  VAR_11->umazone = FUNC_5(VAR_11->name, VAR_11->size,
      ((void*)0), ((void*)0), ((void*)0), ((void*)0), VAR_11->size - 1, VAR_9);
  if (VAR_11->umazone == ((void*)0)) {
   FUNC_1(VAR_10);
   return (((void*)0));
  }
  if (VAR_7 != ((void*)0))
   FUNC_6(VAR_11->umazone, VAR_7);
  if (VAR_8 != ((void*)0))
   FUNC_7(VAR_11->umazone, VAR_8);
  ++VAR_10->num_zones;
 }

 return (VAR_10);
}
