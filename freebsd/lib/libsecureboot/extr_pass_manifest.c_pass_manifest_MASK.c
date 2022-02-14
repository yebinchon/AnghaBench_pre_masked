
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stat {int st_size; int st_mode; } ;
struct TYPE_4__ {int vtable; } ;
typedef TYPE_1__ br_hash_compat_context ;
struct TYPE_5__ {int (* out ) (int *,unsigned char*) ;int (* update ) (int *,char*,int ) ;int (* init ) (int *) ;} ;
typedef TYPE_2__ br_hash_class ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct stat*,int) ;
 int VAR_8 ;
 TYPE_2__ VAR_9 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int,unsigned char*,int) ;
 int FUNC_4 (struct stat*) ;
 char* VAR_10 ;
 char* VAR_11 ;
 char* VAR_12 ;
 int VAR_13 ;
 char* FUNC_5 (char const*,int *) ;
 int FUNC_6 (char const*,struct stat*) ;
 int FUNC_7 (char*,char const*) ;
 scalar_t__ FUNC_8 (char const*,scalar_t__) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,char*,int ) ;
 int FUNC_11 (int *,unsigned char*) ;
 scalar_t__ FUNC_12 (char const*,int ) ;

int
FUNC_13(const char *VAR_14, const char *VAR_15)
{
 char *VAR_16;
 struct stat VAR_17;
 unsigned char VAR_18[VAR_8];
 const br_hash_class *VAR_19;
 br_hash_compat_context VAR_20;
 int VAR_21;

 VAR_16 = ((void*)0);
 VAR_19 = &VAR_9;

 if (FUNC_8(VAR_14, VAR_3) == VAR_3 ||
     FUNC_8(VAR_15, VAR_3) == VAR_3)
  return (VAR_0);

 VAR_21 = FUNC_6(VAR_14, &VAR_17);
 if (VAR_21 != 0)
  goto out;

 if (!FUNC_0(VAR_17.st_mode)) {
  VAR_21 = VAR_0;
  goto out;
 }

 VAR_21 = FUNC_4(&VAR_17);

 if (VAR_21 != VAR_6 && VAR_21 != VAR_7) {
  VAR_21 = VAR_2;
  goto out;
 }

 if (VAR_21 == VAR_7)
  VAR_16 = FUNC_5(VAR_14, ((void*)0));
 else
  VAR_16 = (char *)FUNC_12(VAR_14, VAR_4);

 if (VAR_16 == ((void*)0)) {
  FUNC_1(&VAR_17, VAR_5);
  VAR_21 = VAR_1;
  goto out;
 }

 FUNC_1(&VAR_17, VAR_7);

 VAR_19->init(&VAR_20.vtable);
 VAR_19->update(&VAR_20.vtable, VAR_16, VAR_17.st_size);
 VAR_19->out(&VAR_20.vtable, VAR_18);

 if (VAR_15 == ((void*)0))
  VAR_12[0] = '\0';
 else
  FUNC_7(VAR_12, VAR_15);

 FUNC_7(VAR_11, VAR_14);

 FUNC_3(VAR_10, 2 * VAR_8 + 2,
     VAR_18, VAR_8);
 VAR_10[2*VAR_8] = '\0';

 VAR_13 = 1;
 VAR_21 = 0;

out:
 if (VAR_16 != ((void*)0))
  FUNC_2(VAR_16);

 return (VAR_21);
}
