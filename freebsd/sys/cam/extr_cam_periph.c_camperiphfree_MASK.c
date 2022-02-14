
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int func_code; } ;
union ccb {int cpi; TYPE_1__ ccb_h; } ;
struct periph_driver {int generation; int units; int driver_name; } ;
struct cam_periph {scalar_t__ periph_allocating; int flags; int deferred_ac; int path; int (* deferred_callback ) (int *,int,int ,void*) ;int (* periph_dtor ) (struct cam_periph*) ;int periph_name; int unit_number; } ;




 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,struct cam_periph*,int ) ;
 int VAR_7 ;
 int FUNC_3 (struct cam_periph*,int ) ;
 int FUNC_4 (struct cam_periph*,int ) ;
 struct periph_driver** VAR_8 ;
 int FUNC_5 (char*) ;
 int VAR_9 ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (struct cam_periph*) ;
 int FUNC_8 (int *,int,int ,void*) ;
 int VAR_10 ;
 int FUNC_9 (union ccb*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 () ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 (struct cam_periph*) ;
 int FUNC_15 (TYPE_1__*,int ,int ) ;
 int FUNC_16 () ;

__attribute__((used)) static void
FUNC_17(struct cam_periph *VAR_11)
{
 struct periph_driver **VAR_12;
 struct periph_driver *VAR_13;

 FUNC_3(VAR_11, VAR_5);
 FUNC_1(VAR_11->periph_allocating == 0, ("%s%d: freed while allocating",
     VAR_11->periph_name, VAR_11->unit_number));
 for (VAR_12 = VAR_8; *VAR_12 != ((void*)0); VAR_12++) {
  if (FUNC_6((*VAR_12)->driver_name, VAR_11->periph_name) == 0)
   break;
 }
 if (*VAR_12 == ((void*)0)) {
  FUNC_5("camperiphfree: attempt to free non-existant periph\n");
  return;
 }
 VAR_13 = *VAR_12;







 VAR_11->flags |= VAR_2;






 FUNC_16();
 if (VAR_11->periph_dtor != ((void*)0))
  VAR_11->periph_dtor(VAR_11);




 FUNC_11();

 FUNC_2(&VAR_13->units, VAR_11, VAR_10);
 VAR_13->generation++;

 FUNC_14(VAR_11);

 FUNC_16();
 if ((VAR_11->flags & VAR_1) && !VAR_9)
  FUNC_13(VAR_11->path, "Periph destroyed\n");
 else
  FUNC_0(VAR_11->path, VAR_0, ("Periph destroyed\n"));

 if (VAR_11->flags & VAR_3) {
  union ccb VAR_14;
  void *VAR_15;

  switch (VAR_11->deferred_ac) {
  case 129:
   VAR_14.ccb_h.func_code = VAR_7;
   FUNC_15(&VAR_14.ccb_h, VAR_11->path, VAR_4);
   FUNC_9(&VAR_14);
   VAR_15 = &VAR_14;
   break;
  case 128:
   FUNC_12(&VAR_14.cpi, VAR_11->path);
   VAR_15 = &VAR_14;
   break;
  default:
   VAR_15 = ((void*)0);
   break;
  }
  VAR_11->deferred_callback(((void*)0), VAR_11->deferred_ac,
       VAR_11->path, VAR_15);
 }
 FUNC_10(VAR_11->path);
 FUNC_4(VAR_11, VAR_6);
 FUNC_11();
}
