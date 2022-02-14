
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct open_file {int f_flags; struct fs_ops* f_ops; TYPE_1__* f_dev; int * f_rabuf; int * f_devdata; scalar_t__ f_offset; } ;
struct fs_ops {int (* fo_open ) (char const*,struct open_file*) ;} ;
struct TYPE_2__ {int (* dv_close ) (struct open_file*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct open_file*) ;
 int FUNC_1 (struct open_file*,char const*,char const**) ;
 int VAR_5 ;
 struct fs_ops* VAR_6 ;
 struct fs_ops** VAR_7 ;
 struct open_file* VAR_8 ;
 int FUNC_2 () ;
 int FUNC_3 (struct open_file*) ;
 int FUNC_4 (char const*,struct open_file*) ;
 int FUNC_5 (char const*,struct open_file*) ;
 int FUNC_6 (struct open_file*) ;

int
FUNC_7(const char *VAR_9, int VAR_10)
{
 struct fs_ops *VAR_11;
 struct open_file *VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16;
 const char *VAR_17;

 if ((VAR_13 = FUNC_2()) == -1) {
  VAR_5 = VAR_1;
  return (-1);
 }

 VAR_12 = &VAR_8[VAR_13];
 VAR_12->f_flags = VAR_10 + 1;
 VAR_12->f_dev = ((void*)0);
 VAR_12->f_ops = ((void*)0);
 VAR_12->f_offset = 0;
 VAR_12->f_devdata = ((void*)0);
 VAR_17 = ((void*)0);

 if (VAR_6 != ((void*)0)) {
  VAR_11 = VAR_6;
  VAR_15 = (VAR_11->fo_open)(VAR_9, VAR_12);
  if (VAR_15 == 0)
   goto ok;
  goto err;
 }

 VAR_15 = FUNC_1(VAR_12, VAR_9, &VAR_17);
 if (VAR_15 ||
     (((VAR_12->f_flags & VAR_3) == 0) && VAR_12->f_dev == ((void*)0)))
  goto err;


 if (VAR_17 == ((void*)0) || *VAR_17 == '\0') {
  VAR_12->f_flags |= VAR_4;
  VAR_12->f_rabuf = ((void*)0);
  return (VAR_13);
 }


 VAR_16 = VAR_2;
 for (VAR_14 = 0; VAR_7[VAR_14] != ((void*)0); VAR_14++) {
  VAR_11 = VAR_7[VAR_14];
  VAR_15 = (VAR_11->fo_open)(VAR_17, VAR_12);
  if (VAR_15 == 0)
   goto ok;
  if (VAR_15 != VAR_0)
   VAR_16 = VAR_15;
 }
 VAR_15 = VAR_16;

 if ((VAR_12->f_flags & VAR_3) == 0 && VAR_12->f_dev != ((void*)0))
  VAR_12->f_dev->dv_close(VAR_12);
 if (VAR_15)
  FUNC_0(VAR_12);

err:
 VAR_12->f_flags = 0;
 VAR_5 = VAR_15;
 return (-1);

ok:
 VAR_12->f_ops = VAR_11;
 FUNC_3(VAR_12);
 return (VAR_13);
}
