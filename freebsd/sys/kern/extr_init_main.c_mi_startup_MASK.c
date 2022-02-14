
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct sysinit {int subsystem; scalar_t__ order; scalar_t__ udata; int (* func ) (scalar_t__) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct sysinit** FUNC_0 (int ) ;
 struct sysinit** FUNC_1 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (struct sysinit**,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 struct sysinit** VAR_12 ;
 struct sysinit** VAR_13 ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 () ;
 char* FUNC_10 (int ,int ) ;
 struct sysinit** VAR_14 ;
 struct sysinit** VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;

void
FUNC_11(void)
{

 struct sysinit **VAR_18;
 struct sysinit **VAR_19;
 struct sysinit *VAR_20;






 FUNC_2();

 if (VAR_10 & VAR_6)
  VAR_11++;

 if (VAR_14 == ((void*)0)) {
  VAR_14 = FUNC_0(VAR_16);
  VAR_15 = FUNC_1(VAR_16);
 }

restart:




 for (VAR_18 = VAR_14; VAR_18 < VAR_15; VAR_18++) {
  for (VAR_19 = VAR_18 + 1; VAR_19 < VAR_15; VAR_19++) {
   if ((*VAR_18)->subsystem < (*VAR_19)->subsystem ||
        ((*VAR_18)->subsystem == (*VAR_19)->subsystem &&
         (*VAR_18)->order <= (*VAR_19)->order))
    continue;
   VAR_20 = *VAR_18;
   *VAR_18 = *VAR_19;
   *VAR_19 = VAR_20;
  }
 }
 for (VAR_18 = VAR_14; VAR_18 < VAR_15; VAR_18++) {

  if ((*VAR_18)->subsystem == VAR_9)
   continue;

  if ((*VAR_18)->subsystem == VAR_8)
   continue;
  (*((*VAR_18)->func))((*VAR_18)->udata);







  (*VAR_18)->subsystem = VAR_8;


  if (VAR_12 != ((void*)0)) {
   if (VAR_14 != FUNC_0(VAR_16))
    FUNC_4(VAR_14, VAR_5);
   VAR_14 = VAR_12;
   VAR_15 = VAR_13;
   VAR_12 = ((void*)0);
   VAR_13 = ((void*)0);
   goto restart;
  }
 }

 FUNC_3();

 FUNC_5(&VAR_2, VAR_4 | VAR_3);
 FUNC_6(&VAR_2);




 FUNC_9();

}
