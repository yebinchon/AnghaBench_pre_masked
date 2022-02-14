
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
struct kcov_info {scalar_t__ kvaddr; scalar_t__ state; size_t bufsize; size_t entries; int bufobj; } ;
struct TYPE_6__ {int td_ucred; } ;
struct TYPE_5__ {int valid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_11 ;
 TYPE_4__* VAR_12 ;
 size_t VAR_13 ;
 scalar_t__ FUNC_3 (size_t) ;
 int FUNC_4 (scalar_t__,TYPE_1__**,int) ;
 size_t FUNC_5 (size_t,size_t) ;
 TYPE_1__* FUNC_6 (int ,size_t,int) ;
 int FUNC_7 (int ,int ,size_t,int,int ,int ) ;

__attribute__((used)) static int
FUNC_8(struct kcov_info *VAR_14, size_t VAR_15)
{
 size_t VAR_16, VAR_17;
 vm_page_t VAR_18;

 FUNC_0(VAR_14->kvaddr == 0, ("kcov_alloc: Already have a buffer"));
 FUNC_0(VAR_14->state == VAR_3,
     ("kcov_alloc: Not in open state (%x)", VAR_14->state));

 if (VAR_15 < 2 || VAR_15 > VAR_13)
  return (VAR_0);


 VAR_14->bufsize = FUNC_5(VAR_15 * VAR_2, VAR_5);
 VAR_17 = VAR_14->bufsize / VAR_5;

 if ((VAR_14->kvaddr = FUNC_3(VAR_14->bufsize)) == 0)
  return (VAR_1);

 VAR_14->bufobj = FUNC_7(VAR_4, 0, VAR_14->bufsize,
     VAR_6 | VAR_7, 0, VAR_12->td_ucred);

 FUNC_1(VAR_14->bufobj);
 for (VAR_16 = 0; VAR_16 < VAR_17; VAR_16++) {
  VAR_18 = FUNC_6(VAR_14->bufobj, VAR_16,
      VAR_8 | VAR_10 | VAR_9);
  VAR_18->valid = VAR_11;
  FUNC_4(VAR_14->kvaddr + VAR_16 * VAR_5, &VAR_18, 1);
 }
 FUNC_2(VAR_14->bufobj);

 VAR_14->entries = VAR_15;

 return (0);
}
