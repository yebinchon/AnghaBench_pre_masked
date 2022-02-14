
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vendor ;
typedef int u_char ;
struct fw_vendor {scalar_t__ type; scalar_t__ dev_type; int * pattern; } ;
struct TYPE_2__ {scalar_t__ vendor; } ;
struct cam_device {TYPE_1__ inq_data; } ;
struct ata_params {int * model; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int const*,int const*,int ) ;
 int FUNC_2 (int *,int *,int,int) ;
 int FUNC_3 (char*) ;
 struct fw_vendor* VAR_2 ;

__attribute__((used)) static struct fw_vendor *
FUNC_4(struct cam_device *VAR_3, struct ata_params *VAR_4)
{
 char VAR_5[42];
 struct fw_vendor *VAR_6;

 if (VAR_3 == ((void*)0))
  return (((void*)0));

 if (VAR_4 != ((void*)0)) {
  FUNC_2((u_char *)VAR_5, VAR_4->model,
      sizeof(VAR_4->model), sizeof(VAR_5));
  for (VAR_6 = VAR_2; VAR_6->pattern != ((void*)0); VAR_6++) {
   if (VAR_6->type == VAR_1)
    return (VAR_6);
  }
 } else {
  FUNC_2((u_char *)VAR_5, (u_char *)VAR_3->inq_data.vendor,
      sizeof(VAR_3->inq_data.vendor), sizeof(VAR_5));
 }
 for (VAR_6 = VAR_2; VAR_6->pattern != ((void*)0); VAR_6++) {
  if (!FUNC_1((const u_char *)VAR_5,
      (const u_char *)VAR_6->pattern, FUNC_3(VAR_5))) {
   if ((VAR_6->dev_type == VAR_0)
    || (VAR_6->dev_type == FUNC_0(&VAR_3->inq_data)))
    break;
  }
 }
 return (VAR_6);
}
