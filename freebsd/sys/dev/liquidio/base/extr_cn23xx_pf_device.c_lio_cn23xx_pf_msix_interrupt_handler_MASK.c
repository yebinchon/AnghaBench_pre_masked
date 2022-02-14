
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct octeon_device {int pf_num; struct lio_droq** droq; } ;
struct lio_ioq_vector {size_t droq_index; int ioq_num; struct octeon_device* oct_dev; } ;
struct lio_droq {int pkts_sent_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct octeon_device*,char*,int ,int ) ;
 int FUNC_1 (struct octeon_device*,int ) ;

__attribute__((used)) static uint64_t
FUNC_2(void *VAR_4)
{
 struct lio_ioq_vector *VAR_5 = (struct lio_ioq_vector *)VAR_4;
 struct octeon_device *VAR_6 = VAR_5->oct_dev;
 struct lio_droq *VAR_7 = VAR_6->droq[VAR_5->droq_index];
 uint64_t VAR_8;
 uint64_t VAR_9 = 0;

 if (VAR_7 == ((void*)0)) {
  FUNC_0(VAR_6, "23XX bringup FIXME: oct pfnum:%d ioq_vector->ioq_num :%d droq is NULL\n",
       VAR_6->pf_num, VAR_5->ioq_num);
  return (0);
 }
 VAR_8 = FUNC_1(VAR_6, VAR_7->pkts_sent_reg);






 if (!VAR_8 || (VAR_8 == 0xFFFFFFFFFFFFFFFFULL))
  return (VAR_9);


 if (VAR_8 & VAR_1)
  VAR_9 |= VAR_3;

 if (VAR_8 & VAR_0)

  VAR_9 |= VAR_2;





 return (VAR_9);
}
