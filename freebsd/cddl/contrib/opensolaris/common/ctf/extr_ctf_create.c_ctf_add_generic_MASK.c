
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint_t ;
typedef scalar_t__ ctf_id_t ;
struct TYPE_11__ {int ctf_flags; int ctf_dtstrlen; scalar_t__ ctf_dtnextid; } ;
typedef TYPE_1__ ctf_file_t ;
struct TYPE_12__ {char* dtd_name; scalar_t__ dtd_type; } ;
typedef TYPE_2__ ctf_dtdef_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (TYPE_2__*,int) ;
 TYPE_2__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ) ;
 char* FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (char*) ;

__attribute__((used)) static ctf_id_t
FUNC_8(ctf_file_t *VAR_10, uint_t VAR_11, const char *VAR_12, ctf_dtdef_t **VAR_13)
{
 ctf_dtdef_t *VAR_14;
 ctf_id_t VAR_15;
 char *VAR_16 = ((void*)0);

 if (VAR_11 != VAR_0 && VAR_11 != VAR_1)
  return (FUNC_5(VAR_10, VAR_6));

 if (!(VAR_10->ctf_flags & VAR_9))
  return (FUNC_5(VAR_10, VAR_5));

 if (FUNC_0(VAR_10->ctf_dtnextid, 1) > VAR_2)
  return (FUNC_5(VAR_10, VAR_4));

 if ((VAR_14 = FUNC_2(sizeof (ctf_dtdef_t))) == ((void*)0))
  return (FUNC_5(VAR_10, VAR_3));

 if (VAR_12 != ((void*)0) && (VAR_16 = FUNC_6(VAR_12)) == ((void*)0)) {
  FUNC_4(VAR_14, sizeof (ctf_dtdef_t));
  return (FUNC_5(VAR_10, VAR_3));
 }

 VAR_15 = VAR_10->ctf_dtnextid++;
 VAR_15 = FUNC_0(VAR_15, (VAR_10->ctf_flags & VAR_7));

 FUNC_1(VAR_14, sizeof (ctf_dtdef_t));
 VAR_14->dtd_name = VAR_16;
 VAR_14->dtd_type = VAR_15;

 if (VAR_16 != ((void*)0))
  VAR_10->ctf_dtstrlen += FUNC_7(VAR_16) + 1;

 FUNC_3(VAR_10, VAR_14);
 VAR_10->ctf_flags |= VAR_8;

 *VAR_13 = VAR_14;
 return (VAR_15);
}
