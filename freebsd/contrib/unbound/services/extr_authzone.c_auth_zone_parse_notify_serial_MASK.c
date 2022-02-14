
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct query_info {int dummy; } ;
typedef int ssize_t ;
typedef int sldns_buffer ;
typedef int q ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct query_info*,int ,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct query_info*,int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int) ;

int
FUNC_10(sldns_buffer* VAR_1, uint32_t *VAR_2)
{
 struct query_info VAR_3;
 uint16_t VAR_4;
 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
 FUNC_8(VAR_1, 0);
 if(!FUNC_3(&VAR_3, VAR_1)) return 0;
 if(FUNC_0(FUNC_4(VAR_1)) == 0) return 0;

 if(FUNC_7(VAR_1) < 1) return 0;
 if(FUNC_2(VAR_1) == 0) return 0;

 if(FUNC_7(VAR_1) < 10 )
  return 0;
 if(FUNC_5(VAR_1) != VAR_0) return 0;
 FUNC_9(VAR_1, 2);
 FUNC_9(VAR_1, 4);
 VAR_4 = FUNC_5(VAR_1);
 if(FUNC_7(VAR_1) < VAR_4) return 0;
 if(VAR_4 < 22) return 0;
 FUNC_9(VAR_1, (ssize_t)(VAR_4-20));
 *VAR_2 = FUNC_6(VAR_1);

 return 1;
}
