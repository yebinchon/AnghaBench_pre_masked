
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int64_t ;
typedef int u_int32_t ;
struct mem_range_softc {int mr_ndesc; TYPE_1__* mr_desc; scalar_t__ mr_cap; } ;
struct mem_range_desc {int dummy; } ;
struct TYPE_2__ {int mr_base; int mr_len; int mr_flags; } ;


 int FUNC_0 (int,int,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int,int ,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct mem_range_softc *VAR_6)
{
 u_int64_t VAR_7;
 u_int32_t VAR_8, VAR_9, VAR_10, VAR_11;
 int VAR_12;

 VAR_6->mr_cap = 0;
 VAR_6->mr_ndesc = 2;
 VAR_6->mr_desc = FUNC_2(VAR_6->mr_ndesc * sizeof(struct mem_range_desc),
     VAR_2, VAR_3 | VAR_4);
 if (VAR_6->mr_desc == ((void*)0))
  FUNC_3("k6_mrinit: malloc returns NULL");

 VAR_7 = FUNC_5(VAR_5);
 for (VAR_12 = 0; VAR_12 < VAR_6->mr_ndesc; VAR_12++) {
  u_int32_t VAR_13 = (VAR_7 & (0xffffffff << (32 * VAR_12))) >> (32 * VAR_12);

  FUNC_0(VAR_13, VAR_8, VAR_9, VAR_10, VAR_11);
  VAR_6->mr_desc[VAR_12].mr_base = VAR_8;
  VAR_6->mr_desc[VAR_12].mr_len = FUNC_1(VAR_9) << 17;
  if (VAR_10)
   VAR_6->mr_desc[VAR_12].mr_flags |= VAR_1;
  if (VAR_11)
   VAR_6->mr_desc[VAR_12].mr_flags |= VAR_0;
 }

 FUNC_4("K6-family MTRR support enabled (%d registers)\n", VAR_6->mr_ndesc);
}
