
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ciss_softc {TYPE_1__** ciss_logical; int * ciss_cam_sim; } ;
struct cam_periph {char* periph_name; int unit_number; } ;
struct cam_path {int dummy; } ;
struct TYPE_2__ {scalar_t__* cl_name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 struct cam_periph* FUNC_1 (struct cam_path*,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__*,char*,char*,int ) ;
 int FUNC_4 (struct cam_path**,int *,int ,int,int ) ;
 int FUNC_5 (struct cam_path*) ;
 int FUNC_6 (struct cam_path*) ;
 int FUNC_7 (struct cam_path*) ;

__attribute__((used)) static int
FUNC_8(struct ciss_softc *VAR_2, int VAR_3, int VAR_4)
{
    struct cam_periph *VAR_5;
    struct cam_path *VAR_6;
    int VAR_7;

    if (FUNC_0(VAR_3))
 return (0);

    VAR_7 = FUNC_4(&VAR_6, ((void*)0), FUNC_2(VAR_2->ciss_cam_sim[VAR_3]),
        VAR_4, 0);

    if (VAR_7 == VAR_0) {
 FUNC_6(VAR_6);
 VAR_5 = FUNC_1(VAR_6, ((void*)0));
 FUNC_7(VAR_6);
 FUNC_5(VAR_6);
 if (VAR_5 != ((void*)0)) {
  FUNC_3(VAR_2->ciss_logical[VAR_3][VAR_4].cl_name, "%s%d",
   VAR_5->periph_name, VAR_5->unit_number);
  return(0);
 }
    }
    VAR_2->ciss_logical[VAR_3][VAR_4].cl_name[0] = 0;
    return(VAR_1);
}
