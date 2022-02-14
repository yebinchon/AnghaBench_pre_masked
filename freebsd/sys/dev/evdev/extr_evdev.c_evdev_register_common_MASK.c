
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evdev_dev {int* ev_rep; scalar_t__ ev_report_size; int * ev_absinfo; int ev_abs_flags; int ev_mtx; int ev_rep_callout; int ev_flags; int ev_clients; int ev_serial; int ev_name; int ev_shortname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct evdev_dev*) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (struct evdev_dev*,char*,int ,int ,int ) ;
 int FUNC_5 (struct evdev_dev*) ;
 int FUNC_6 (struct evdev_dev*) ;
 scalar_t__ FUNC_7 (struct evdev_dev*,int ) ;
 int FUNC_8 (struct evdev_dev*) ;
 int FUNC_9 (struct evdev_dev*,int ) ;
 int FUNC_10 (struct evdev_dev*) ;

__attribute__((used)) static int
FUNC_11(struct evdev_dev *VAR_5)
{
 int VAR_6;

 FUNC_4(VAR_5, "%s: registered evdev provider: %s <%s>\n",
     VAR_5->ev_shortname, VAR_5->ev_name, VAR_5->ev_serial);


 FUNC_0(&VAR_5->ev_clients);

 if (FUNC_7(VAR_5, VAR_2) &&
     FUNC_2(VAR_5->ev_flags, VAR_1)) {

  FUNC_3(&VAR_5->ev_rep_callout, &VAR_5->ev_mtx, 0);

  if (VAR_5->ev_rep[VAR_3] == 0 &&
      VAR_5->ev_rep[VAR_4] == 0) {

   VAR_5->ev_rep[VAR_3] = 250;
   VAR_5->ev_rep[VAR_4] = 33;
  }
 }


 if (FUNC_2(VAR_5->ev_abs_flags, VAR_0) &&
     VAR_5->ev_absinfo != ((void*)0) && FUNC_1(VAR_5) > 0)
  FUNC_8(VAR_5);


 if (VAR_5->ev_report_size == 0) {
  VAR_6 = FUNC_9(VAR_5,
      FUNC_6(VAR_5));
  if (VAR_6 != 0)
   goto bail_out;
 }


 VAR_6 = FUNC_5(VAR_5);
 if (VAR_6 != 0)
  goto bail_out;


 FUNC_10(VAR_5);

bail_out:
 return (VAR_6);
}
