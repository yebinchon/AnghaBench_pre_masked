
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ufs2_daddr_t ;
struct data_blk {int db_size; int * db_buf; } ;


 int FUNC_0 (int *,int ,int *,int) ;
 struct data_blk* FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (char*,int ) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static uint8_t *
FUNC_6(ufs2_daddr_t VAR_2, int VAR_3)
{
 struct data_blk *VAR_4;

 VAR_4 = FUNC_1(VAR_2);




 if (VAR_3 != VAR_4->db_size) {
  if (VAR_4->db_buf)
   FUNC_4(VAR_4->db_buf);
  VAR_4->db_buf = FUNC_3(VAR_3);
  VAR_4->db_size = VAR_3;
  if (FUNC_0(&VAR_0, FUNC_5(VAR_1, VAR_2), VAR_4->db_buf, VAR_3) == -1)
   FUNC_2("Failed to read data block %jd\n", VAR_2);
 }
 return (VAR_4->db_buf);
}
