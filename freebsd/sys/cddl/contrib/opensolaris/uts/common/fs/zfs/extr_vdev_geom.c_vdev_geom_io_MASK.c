
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct g_consumer {TYPE_1__* provider; } ;
struct bio {int bio_cmd; int bio_offset; int * bio_data; int bio_length; int * bio_done; } ;
typedef int off_t ;
struct TYPE_2__ {int sectorsize; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (struct bio*,char*) ;
 struct bio* FUNC_3 () ;
 int FUNC_4 (struct bio*) ;
 int FUNC_5 (struct bio*,struct g_consumer*) ;
 int FUNC_6 (struct bio**,size_t) ;
 struct bio** FUNC_7 (size_t,int ) ;

__attribute__((used)) static void
FUNC_8(struct g_consumer *VAR_2, int *VAR_3, void **VAR_4, off_t *VAR_5,
    off_t *VAR_6, int *VAR_7, int VAR_8)
{
 struct bio **VAR_9;
 u_char *VAR_10;
 off_t VAR_11, VAR_12, VAR_13, VAR_14;
 int VAR_15, VAR_16, VAR_17;
 size_t VAR_18;

 VAR_12 = VAR_1 - (VAR_1 % VAR_2->provider->sectorsize);
 VAR_16 = 0;


 for (VAR_15 = 0; VAR_15 < VAR_8; VAR_15++)
  VAR_16 += (VAR_6[VAR_15] + VAR_12 - 1) / VAR_12;


 VAR_18 = VAR_16 * sizeof(struct bio*);
 VAR_9 = FUNC_7(VAR_18, VAR_0);


 for (VAR_15 = VAR_17 = 0; VAR_15 < VAR_8; VAR_15++) {
  VAR_11 = VAR_5[VAR_15];
  VAR_10 = VAR_4[VAR_15];
  VAR_13 = VAR_6[VAR_15];
  VAR_14 = VAR_11 + VAR_13;
  FUNC_0((VAR_11 % VAR_2->provider->sectorsize) == 0);
  FUNC_0((VAR_13 % VAR_2->provider->sectorsize) == 0);

  for (; VAR_11 < VAR_14; VAR_11 += VAR_12, VAR_10 += VAR_12, VAR_13 -= VAR_12, VAR_17++) {
   VAR_9[VAR_17] = FUNC_3();
   VAR_9[VAR_17]->bio_cmd = VAR_3[VAR_15];
   VAR_9[VAR_17]->bio_done = ((void*)0);
   VAR_9[VAR_17]->bio_offset = VAR_11;
   VAR_9[VAR_17]->bio_length = FUNC_1(VAR_13, VAR_12);
   VAR_9[VAR_17]->bio_data = VAR_10;
   FUNC_5(VAR_9[VAR_17], VAR_2);
  }
 }
 FUNC_0(VAR_17 == VAR_16);


 for (VAR_15 = VAR_17 = 0; VAR_15 < VAR_8; VAR_15++) {
  VAR_11 = VAR_5[VAR_15];
  VAR_13 = VAR_6[VAR_15];
  VAR_14 = VAR_11 + VAR_13;

  for (; VAR_11 < VAR_14; VAR_11 += VAR_12, VAR_13 -= VAR_12, VAR_17++) {
   VAR_7[VAR_15] = FUNC_2(VAR_9[VAR_17], "vdev_geom_io") || VAR_7[VAR_15];
   FUNC_4(VAR_9[VAR_17]);
  }
 }
 FUNC_6(VAR_9, VAR_18);
}
