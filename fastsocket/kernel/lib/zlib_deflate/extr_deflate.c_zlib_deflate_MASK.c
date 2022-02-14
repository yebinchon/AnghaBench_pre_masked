
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef TYPE_1__* z_streamp ;
typedef int uInt ;
struct TYPE_14__ {scalar_t__ status; int last_flush; int w_bits; int level; scalar_t__ strstart; scalar_t__ pending; scalar_t__ lookahead; int noheader; TYPE_1__* strm; } ;
typedef TYPE_2__ deflate_state ;
typedef scalar_t__ block_state ;
struct TYPE_13__ {scalar_t__ avail_in; scalar_t__ avail_out; int adler; int * next_in; int * state; } ;
struct TYPE_12__ {scalar_t__ (* func ) (TYPE_2__*,int) ;} ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 TYPE_10__* VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_18 ;
 int FUNC_3 (TYPE_2__*,int) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,char*,long,int ) ;
 int FUNC_7 (TYPE_2__*) ;

int FUNC_8(
 z_streamp VAR_19,
 int VAR_20
)
{
    int VAR_21;
    deflate_state *VAR_22;

    if (VAR_19 == ((void*)0) || VAR_19->state == ((void*)0) ||
 VAR_20 > VAR_6 || VAR_20 < 0) {
        return VAR_13;
    }
    VAR_22 = (deflate_state *) VAR_19->state;

    if ((VAR_19->next_in == ((void*)0) && VAR_19->avail_in != 0) ||
 (VAR_22->status == VAR_1 && VAR_20 != VAR_6)) {
        return VAR_13;
    }
    if (VAR_19->avail_out == 0) return VAR_4;

    VAR_22->strm = VAR_19;
    VAR_21 = VAR_22->last_flush;
    VAR_22->last_flush = VAR_20;


    if (VAR_22->status == VAR_2) {

        uInt VAR_23 = (VAR_5 + ((VAR_22->w_bits-8)<<4)) << 8;
        uInt VAR_24 = (VAR_22->level-1) >> 1;

        if (VAR_24 > 3) VAR_24 = 3;
        VAR_23 |= (VAR_24 << 6);
 if (VAR_22->strstart != 0) VAR_23 |= VAR_3;
        VAR_23 += 31 - (VAR_23 % 31);

        VAR_22->status = VAR_0;
        FUNC_3(VAR_22, VAR_23);


 if (VAR_22->strstart != 0) {
     FUNC_3(VAR_22, (uInt)(VAR_19->adler >> 16));
     FUNC_3(VAR_22, (uInt)(VAR_19->adler & 0xffff));
 }
 VAR_19->adler = 1L;
    }


    if (VAR_22->pending != 0) {
        FUNC_2(VAR_19);
        if (VAR_19->avail_out == 0) {






     VAR_22->last_flush = -1;
     return VAR_9;
 }





    } else if (VAR_19->avail_in == 0 && VAR_20 <= VAR_21 &&
        VAR_20 != VAR_6) {
        return VAR_4;
    }


    if (VAR_22->status == VAR_1 && VAR_19->avail_in != 0) {
        return VAR_4;
    }



    if (VAR_19->avail_in != 0 || VAR_22->lookahead != 0 ||
        (VAR_20 != VAR_8 && VAR_22->status != VAR_1)) {
        block_state VAR_25;

 VAR_25 = (*(VAR_15[VAR_22->level].func))(VAR_22, VAR_20);

        if (VAR_25 == VAR_17 || VAR_25 == VAR_16) {
            VAR_22->status = VAR_1;
        }
        if (VAR_25 == VAR_18 || VAR_25 == VAR_17) {
     if (VAR_19->avail_out == 0) {
         VAR_22->last_flush = -1;
     }
     return VAR_9;







 }
        if (VAR_25 == VAR_14) {
            if (VAR_20 == VAR_11) {
                FUNC_5(VAR_22);
     } else if (VAR_20 == VAR_10) {


  FUNC_7(VAR_22);
            } else {
                FUNC_6(VAR_22, (char*)0, 0L, 0);



                if (VAR_20 == VAR_7) {
                    FUNC_1(VAR_22);
                }
            }
            FUNC_2(VAR_19);
     if (VAR_19->avail_out == 0) {
       VAR_22->last_flush = -1;
       return VAR_9;
     }
        }
    }
    FUNC_0(VAR_19->avail_out > 0, "bug2");

    if (VAR_20 != VAR_6) return VAR_9;
    if (VAR_22->noheader) return VAR_12;


    FUNC_3(VAR_22, (uInt)(VAR_19->adler >> 16));
    FUNC_3(VAR_22, (uInt)(VAR_19->adler & 0xffff));
    FUNC_2(VAR_19);



    VAR_22->noheader = -1;
    return VAR_22->pending != 0 ? VAR_9 : VAR_12;
}
