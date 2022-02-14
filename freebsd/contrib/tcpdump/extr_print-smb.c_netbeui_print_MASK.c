
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_short ;
typedef int u_char ;
struct TYPE_7__ {int const* ndo_snapend; int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;
struct TYPE_8__ {char* nonverbose; char* verbose; int * name; } ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int const) ;
 scalar_t__ FUNC_3 (int const*,char*,int) ;
 TYPE_5__* VAR_0 ;
 int FUNC_4 (TYPE_1__*,int const*,int const*) ;
 int* FUNC_5 (TYPE_1__*,int const*,char*,int const*,int ) ;
 int const* VAR_1 ;
 int VAR_2 ;

void
FUNC_6(netdissect_options *VAR_3,
              u_short VAR_4, const u_char *VAR_5, int VAR_6)
{
    const u_char *VAR_7 = VAR_5 + VAR_6;
    int VAR_8;
    int VAR_9;
    const u_char *VAR_10;
    int VAR_11 = 0;

    if (VAR_7 > VAR_3->ndo_snapend)
 VAR_7 = VAR_3->ndo_snapend;
    FUNC_2(VAR_5[4]);
    VAR_8 = FUNC_0(VAR_5);
    VAR_9 = VAR_5[4];
    VAR_10 = VAR_5 + VAR_8;
    if (VAR_10 >= VAR_7) {
 VAR_10 = VAR_7;
 VAR_11 = 1;
    }

    VAR_1 = VAR_5;

    if (VAR_3->ndo_vflag < 2) {
 FUNC_1((VAR_3, "NBF Packet: "));
 VAR_5 = FUNC_5(VAR_3, VAR_5, "[P5]#", VAR_7, 0);
    } else {
 FUNC_1((VAR_3, "\n>>> NBF Packet\nType=0x%X ", VAR_4));
 VAR_5 = FUNC_5(VAR_3, VAR_5, "Length=[d] Signature=[w] Command=[B]\n#", VAR_7, 0);
    }
    if (VAR_5 == ((void*)0))
 goto out;

    if (VAR_9 > 0x1f || VAR_0[VAR_9].name == ((void*)0)) {
 if (VAR_3->ndo_vflag < 2)
     VAR_5 = FUNC_5(VAR_3, VAR_5, "Unknown NBF Command#", VAR_10, 0);
 else
     VAR_5 = FUNC_5(VAR_3, VAR_5, "Unknown NBF Command\n", VAR_10, 0);
    } else {
 if (VAR_3->ndo_vflag < 2) {
     FUNC_1((VAR_3, "%s", VAR_0[VAR_9].name));
     if (VAR_0[VAR_9].nonverbose != ((void*)0))
  VAR_5 = FUNC_5(VAR_3, VAR_5, VAR_0[VAR_9].nonverbose, VAR_10, 0);
 } else {
     FUNC_1((VAR_3, "%s:\n", VAR_0[VAR_9].name));
     if (VAR_0[VAR_9].verbose != ((void*)0))
  VAR_5 = FUNC_5(VAR_3, VAR_5, VAR_0[VAR_9].verbose, VAR_10, 0);
     else
  FUNC_1((VAR_3, "\n"));
 }
    }

    if (VAR_3->ndo_vflag < 2)
 return;

    if (VAR_5 == ((void*)0))
 goto out;

    if (VAR_11) {

 goto out;
    }


    if (VAR_9 != 0x08 && VAR_9 != 0x09 && VAR_9 != 0x15 &&
        VAR_9 != 0x16)
 goto out;


    if (&VAR_10[3] >= VAR_7)
 goto out;

    if (FUNC_3(VAR_10, "\377SMB",4) == 0)
 FUNC_4(VAR_3, VAR_10, VAR_7);
    else {
 int VAR_12;
 for (VAR_12 = 0; VAR_12 < 128; VAR_12++) {
     if (&VAR_10[VAR_12 + 3] >= VAR_7)
  break;
     if (FUNC_3(&VAR_10[VAR_12], "\377SMB", 4) == 0) {
  FUNC_1((VAR_3, "found SMB packet at %d\n", VAR_12));
  FUNC_4(VAR_3, &VAR_10[VAR_12], VAR_7);
  break;
     }
 }
    }

out:
    FUNC_1((VAR_3, "\n"));
    return;
trunc:
    FUNC_1((VAR_3, "%s", VAR_2));
}
