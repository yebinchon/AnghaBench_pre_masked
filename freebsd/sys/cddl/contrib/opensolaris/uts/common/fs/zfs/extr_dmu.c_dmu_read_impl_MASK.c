
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct TYPE_7__ {scalar_t__ dn_maxblkid; scalar_t__ dn_datablksz; } ;
typedef TYPE_1__ dnode_t ;
struct TYPE_8__ {scalar_t__ db_offset; scalar_t__ db_size; scalar_t__ db_data; } ;
typedef TYPE_2__ dmu_buf_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int VAR_2 ;
 int FUNC_2 (char*,void*,int) ;
 int FUNC_3 (char*,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,scalar_t__,scalar_t__,int ,int ,int*,TYPE_2__***,int ) ;
 int FUNC_5 (TYPE_2__**,int,int ) ;

__attribute__((used)) static int
FUNC_6(dnode_t *VAR_3, uint64_t VAR_4, uint64_t VAR_5,
    void *VAR_6, uint32_t VAR_7)
{
 dmu_buf_t **VAR_8;
 int VAR_9, VAR_10 = 0;






 if (VAR_3->dn_maxblkid == 0) {
  int VAR_11 = VAR_4 > VAR_3->dn_datablksz ? 0 :
      FUNC_1(VAR_5, VAR_3->dn_datablksz - VAR_4);
  FUNC_3((char *)VAR_6 + VAR_11, VAR_5 - VAR_11);
  VAR_5 = VAR_11;
 }

 while (VAR_5 > 0) {
  uint64_t VAR_12 = FUNC_1(VAR_5, VAR_0 / 2);
  int VAR_13;





  VAR_10 = FUNC_4(VAR_3, VAR_4, VAR_12,
      VAR_2, VAR_1, &VAR_9, &VAR_8, VAR_7);
  if (VAR_10)
   break;

  for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++) {
   int VAR_14;
   int VAR_15;
   dmu_buf_t *VAR_16 = VAR_8[VAR_13];

   FUNC_0(VAR_5 > 0);

   VAR_15 = VAR_4 - VAR_16->db_offset;
   VAR_14 = (int)FUNC_1(VAR_16->db_size - VAR_15, VAR_5);

   FUNC_2((char *)VAR_16->db_data + VAR_15, VAR_6, VAR_14);

   VAR_4 += VAR_14;
   VAR_5 -= VAR_14;
   VAR_6 = (char *)VAR_6 + VAR_14;
  }
  FUNC_5(VAR_8, VAR_9, VAR_1);
 }
 return (VAR_10);
}
