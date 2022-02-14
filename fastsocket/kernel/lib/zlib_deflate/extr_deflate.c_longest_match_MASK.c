
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ush ;
typedef scalar_t__ ulg ;
typedef scalar_t__ uInt ;
struct TYPE_4__ {unsigned int max_chain_length; scalar_t__* window; int strstart; int prev_length; int nice_match; scalar_t__* prev; scalar_t__ w_mask; int hash_bits; int good_match; scalar_t__ lookahead; int window_size; scalar_t__ match_start; } ;
typedef TYPE_1__ deflate_state ;
typedef scalar_t__ Pos ;
typedef scalar_t__ IPos ;
typedef scalar_t__ Byte ;


 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static uInt FUNC_2(
 deflate_state *VAR_3,
 IPos VAR_4
)
{
    unsigned VAR_5 = VAR_3->max_chain_length;
    register Byte *VAR_6 = VAR_3->window + VAR_3->strstart;
    register Byte *VAR_7;
    register int VAR_8;
    int VAR_9 = VAR_3->prev_length;
    int VAR_10 = VAR_3->nice_match;
    IPos VAR_11 = VAR_3->strstart > (IPos)FUNC_1(VAR_3) ?
        VAR_3->strstart - (IPos)FUNC_1(VAR_3) : VAR_2;



    Pos *VAR_12 = VAR_3->prev;
    uInt VAR_13 = VAR_3->w_mask;
    register Byte *VAR_14 = VAR_3->window + VAR_3->strstart + VAR_0;
    register Byte VAR_15 = VAR_6[VAR_9-1];
    register Byte VAR_16 = VAR_6[VAR_9];





    FUNC_0(VAR_3->hash_bits >= 8 && VAR_0 == 258, "Code too clever");


    if (VAR_3->prev_length >= VAR_3->good_match) {
        VAR_5 >>= 2;
    }



    if ((uInt)VAR_10 > VAR_3->lookahead) VAR_10 = VAR_3->lookahead;

    FUNC_0((ulg)VAR_3->strstart <= VAR_3->window_size-VAR_1, "need lookahead");

    do {
        FUNC_0(VAR_4 < VAR_3->strstart, "no future");
        VAR_7 = VAR_3->window + VAR_4;
        if (VAR_7[VAR_9] != VAR_16 ||
            VAR_7[VAR_9-1] != VAR_15 ||
            *VAR_7 != *VAR_6 ||
            *++VAR_7 != VAR_6[1]) continue;







        VAR_6 += 2, VAR_7++;
        FUNC_0(*VAR_6 == *VAR_7, "match[2]?");




        do {
        } while (*++VAR_6 == *++VAR_7 && *++VAR_6 == *++VAR_7 &&
                 *++VAR_6 == *++VAR_7 && *++VAR_6 == *++VAR_7 &&
                 *++VAR_6 == *++VAR_7 && *++VAR_6 == *++VAR_7 &&
                 *++VAR_6 == *++VAR_7 && *++VAR_6 == *++VAR_7 &&
                 VAR_6 < VAR_14);

        FUNC_0(VAR_6 <= VAR_3->window+(unsigned)(VAR_3->window_size-1), "wild scan");

        VAR_8 = VAR_0 - (int)(VAR_14 - VAR_6);
        VAR_6 = VAR_14 - VAR_0;



        if (VAR_8 > VAR_9) {
            VAR_3->match_start = VAR_4;
            VAR_9 = VAR_8;
            if (VAR_8 >= VAR_10) break;



            VAR_15 = VAR_6[VAR_9-1];
            VAR_16 = VAR_6[VAR_9];

        }
    } while ((VAR_4 = VAR_12[VAR_4 & VAR_13]) > VAR_11
             && --VAR_5 != 0);

    if ((uInt)VAR_9 <= VAR_3->lookahead) return VAR_9;
    return VAR_3->lookahead;
}
