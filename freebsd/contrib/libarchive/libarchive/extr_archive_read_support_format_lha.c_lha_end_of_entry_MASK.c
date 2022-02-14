
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lha {int end_of_entry_cleanup; int setflag; scalar_t__ crc; scalar_t__ entry_crc_calculated; } ;
struct archive_read {int archive; TYPE_1__* format; } ;
struct TYPE_2__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,char*) ;

__attribute__((used)) static int
FUNC_1(struct archive_read *VAR_4)
{
 struct lha *VAR_5 = (struct lha *)(VAR_4->format->data);
 int VAR_6 = VAR_0;

 if (!VAR_5->end_of_entry_cleanup) {
  if ((VAR_5->setflag & VAR_3) &&
      VAR_5->crc != VAR_5->entry_crc_calculated) {
   FUNC_0(&VAR_4->archive, VAR_1,
       "LHa data CRC error");
   VAR_6 = VAR_2;
  }


  VAR_5->end_of_entry_cleanup = 1;
 }
 return (VAR_6);
}
