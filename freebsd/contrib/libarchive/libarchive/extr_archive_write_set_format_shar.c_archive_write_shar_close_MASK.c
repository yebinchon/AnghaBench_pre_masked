
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int length; int s; } ;
struct shar {scalar_t__ wrote_header; TYPE_1__ work; } ;
struct archive_write {int archive; scalar_t__ format_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct archive_write*,int ,int ) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static int
FUNC_3(struct archive_write *VAR_2)
{
 struct shar *VAR_3;
 int VAR_4;






 VAR_3 = (struct shar *)VAR_2->format_data;







 if (VAR_3->wrote_header == 0)
  return (VAR_1);

 FUNC_1(&VAR_3->work, "exit\n");

 VAR_4 = FUNC_0(VAR_2, VAR_3->work.s, VAR_3->work.length);
 if (VAR_4 != VAR_1)
  return (VAR_0);


 FUNC_2(&VAR_2->archive, 1);





 return (VAR_1);
}
