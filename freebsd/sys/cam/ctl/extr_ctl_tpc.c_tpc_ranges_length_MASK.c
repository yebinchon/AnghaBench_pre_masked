
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_range_desc {int length; } ;
typedef int off_t ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static off_t
FUNC_1(struct scsi_range_desc *VAR_0, int VAR_1)
{
 off_t VAR_2 = 0;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  VAR_2 += FUNC_0(VAR_0[VAR_3].length);
 return (VAR_2);
}
