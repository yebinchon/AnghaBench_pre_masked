
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cab {TYPE_2__* entry_cffolder; } ;
struct archive_read {int archive; TYPE_1__* format; } ;
typedef int ssize_t ;
struct TYPE_4__ {int comptype; int compname; } ;
struct TYPE_3__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (int *,int ,char*,int ) ;
 int FUNC_1 (struct archive_read*) ;
 void const* FUNC_2 (struct archive_read*,int*) ;
 void const* FUNC_3 (struct archive_read*,int*) ;
 void const* FUNC_4 (struct archive_read*,int*) ;

__attribute__((used)) static const void *
FUNC_5(struct archive_read *VAR_3, ssize_t *VAR_4)
{
 struct cab *VAR_5 = (struct cab *)(VAR_3->format->data);
 int VAR_6;

 VAR_6 = FUNC_1(VAR_3);
 if (VAR_6 < VAR_2) {
  *VAR_4 = VAR_6;
  return (((void*)0));
 }

 switch (VAR_5->entry_cffolder->comptype) {
 case 128:
  return (FUNC_4(VAR_3, VAR_4));
 case 129:
  return (FUNC_2(VAR_3, VAR_4));
 case 130:
  return (FUNC_3(VAR_3, VAR_4));
 default:
  FUNC_0(&VAR_3->archive, VAR_0,
      "Unsupported CAB compression : %s",
      VAR_5->entry_cffolder->compname);
  *VAR_4 = VAR_1;
  return (((void*)0));
 }
}
