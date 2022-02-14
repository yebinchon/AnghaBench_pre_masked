
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct ubifs_info {scalar_t__ no_chk_data_crc; int always_chk_crc; int ubi; } ;
struct ubifs_ch {int node_type; int crc; int len; int magic; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* FUNC_0 (int ,void*,int) ;
 int FUNC_1 (char*,int,int,int ,int) ;
 int FUNC_2 (int) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ,int,void*,int,int) ;
 int FUNC_5 (char*,int,int,int,int) ;

__attribute__((used)) static int FUNC_6(const struct ubifs_info *VAR_3, void *VAR_4, int VAR_5,
    int VAR_6, int VAR_7, int VAR_8)
{
 int VAR_9, VAR_10;
 struct ubifs_ch *VAR_11 = VAR_4;
 uint32_t VAR_12, VAR_13;

 FUNC_1("LEB %d:%d, %s, length %d", VAR_7, VAR_8, FUNC_2(VAR_5), VAR_6);

 VAR_9 = FUNC_4(VAR_3->ubi, VAR_7, VAR_4, VAR_8, VAR_6);
 if (VAR_9) {
  FUNC_5("cannot read node type %d from LEB %d:%d, error %d",
     VAR_5, VAR_7, VAR_8, VAR_9);
  return VAR_9;
 }

 if (FUNC_3(VAR_11->magic) != VAR_2)
  return 0;

 if (VAR_11->node_type != VAR_5)
  return 0;

 VAR_10 = FUNC_3(VAR_11->len);
 if (VAR_10 != VAR_6)
  return 0;

 if (VAR_5 == VAR_1 && !VAR_3->always_chk_crc && VAR_3->no_chk_data_crc)
  return 1;

 VAR_12 = FUNC_0(VAR_0, VAR_4 + 8, VAR_10 - 8);
 VAR_13 = FUNC_3(VAR_11->crc);
 if (VAR_12 != VAR_13)
  return 0;

 return 1;
}
