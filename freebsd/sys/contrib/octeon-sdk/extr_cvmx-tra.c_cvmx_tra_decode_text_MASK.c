
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_12__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct TYPE_21__ {int type; int source; int timestamp; int discontinuity; scalar_t__ addresslo; scalar_t__ addresshi; } ;
struct TYPE_15__ {scalar_t__ data; scalar_t__ datahi; } ;
struct TYPE_20__ {int source; int timestamp; size_t dest; scalar_t__ addresslo; scalar_t__ addresshi; scalar_t__ mask; int discontinuity; } ;
struct TYPE_19__ {int source; size_t dest; scalar_t__ addresslo; scalar_t__ addresshi; scalar_t__ subid; } ;
struct TYPE_18__ {int source; scalar_t__ addresslo; scalar_t__ addresshi; scalar_t__ mask; } ;
struct TYPE_24__ {int type; int timestamp; size_t source; int discontinuity; scalar_t__ address; } ;
struct TYPE_26__ {size_t source; size_t dest; scalar_t__ address; scalar_t__ mask; } ;
struct TYPE_23__ {size_t source; size_t dest; scalar_t__ address; scalar_t__ subid; } ;
struct TYPE_22__ {size_t source; scalar_t__ address; scalar_t__ mask; } ;
struct TYPE_16__ {TYPE_4__ cmn2; TYPE_10__ u128; TYPE_3__ iob2; TYPE_2__ iobld2; TYPE_1__ store2; TYPE_7__ cmn; TYPE_9__ iob; TYPE_6__ iobld; TYPE_5__ store; } ;
typedef TYPE_11__ cvmx_tra_data_t ;
struct TYPE_25__ {int time_grn; } ;
struct TYPE_17__ {TYPE_8__ s; } ;
typedef TYPE_12__ cvmx_tra_ctl_t ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*,unsigned long long,unsigned long long,char,...) ;

void FUNC_2(cvmx_tra_ctl_t VAR_8, cvmx_tra_data_t VAR_9)
{
    if (FUNC_0(VAR_1) || FUNC_0(VAR_2))
    {


        int VAR_10 = VAR_9.cmn.type;

        if (VAR_10 >= 0x1a)
            VAR_10 &= 0xf;

        switch (VAR_10)
        {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
                FUNC_1("0x%016llx %c%+10d %s %s 0x%016llx\n",
                    (unsigned long long)VAR_9.u128.data,
                    (VAR_9.cmn.discontinuity) ? 'D' : ' ',
                    VAR_9.cmn.timestamp << (VAR_8.s.time_grn*3),
                    VAR_5[VAR_10],
                    VAR_4[VAR_9.cmn.source],
                    (unsigned long long)VAR_9.cmn.address);
                break;
            case 6:
            case 7:
            case 8:
            case 9:
            case 16:
                FUNC_1("0x%016llx %c%+10d %s %s mask=0x%02x 0x%016llx\n",
                   (unsigned long long)VAR_9.u128.data,
                   (VAR_9.cmn.discontinuity) ? 'D' : ' ',
                   VAR_9.cmn.timestamp << (VAR_8.s.time_grn*3),
                   VAR_5[VAR_10],
                   VAR_4[VAR_9.store.source],
                   (unsigned int)VAR_9.store.mask,
                   (unsigned long long)VAR_9.store.address << 3);
                break;
            case 10:
            case 11:
            case 12:
            case 13:
            case 14:
                FUNC_1("0x%016llx %c%+10d %s %s->%s subdid=0x%x 0x%016llx\n",
                   (unsigned long long)VAR_9.u128.data,
                   (VAR_9.cmn.discontinuity) ? 'D' : ' ',
                   VAR_9.cmn.timestamp << (VAR_8.s.time_grn*3),
                   VAR_5[VAR_10],
                   VAR_4[VAR_9.iobld.source],
                   VAR_0[VAR_9.iobld.dest],
                   (unsigned int)VAR_9.iobld.subid,
                   (unsigned long long)VAR_9.iobld.address);
                break;
            case 15:
                FUNC_1("0x%016llx %c%+10d %s %s->%s len=0x%x 0x%016llx\n",
                   (unsigned long long)VAR_9.u128.data,
                   (VAR_9.cmn.discontinuity) ? 'D' : ' ',
                   VAR_9.cmn.timestamp << (VAR_8.s.time_grn*3),
                   VAR_5[VAR_10],
                   VAR_4[VAR_9.iob.source],
                   VAR_0[VAR_9.iob.dest],
                   (unsigned int)VAR_9.iob.mask,
                   (unsigned long long)VAR_9.iob.address << 3);
                break;
            default:
                FUNC_1("0x%016llx %c%+10d Unknown format\n",
                   (unsigned long long)VAR_9.u128.data,
                   (VAR_9.cmn.discontinuity) ? 'D' : ' ',
                   VAR_9.cmn.timestamp << (VAR_8.s.time_grn*3));
                break;
        }
    }
    else
    {
        int VAR_11;
        int VAR_12;

        VAR_11 = VAR_9.cmn2.type;

        switch (1ull<<VAR_11)
        {
            case 172:
            case 173:
            case 174:
            case 171:
            case 163:
            case 164:
            case 165:
            case 162:
            case 176:
            case 177:
            case 178:
            case 175:
            case 139:
            case 140:
            case 141:
            case 138:
            case 151:
            case 130:
            case 161:
            case 134:
            case 147:
            case 129:
            case 128:
            case 170:
            case 144:
            case 146:
            case 149:
            case 148:


                if (FUNC_0(VAR_3))
                {
                    if (VAR_9.cmn2.source <= 7)
                    {
                        VAR_12 = VAR_7 + (VAR_9.cmn2.source * 4);
                        if (VAR_12 >= 16)
                            VAR_12 += 16;
                    }
                    else
                        VAR_12 = (VAR_9.cmn2.source);
                }
                else
                        VAR_12 = (VAR_9.cmn2.source);

                FUNC_1("0x%016llx%016llx %c%+10d %s %s 0x%016llx%llx\n",
                   (unsigned long long)VAR_9.u128.datahi, (unsigned long long)VAR_9.u128.data,
                   (VAR_9.cmn2.discontinuity) ? 'D' : ' ',
                   VAR_9.cmn2.timestamp << (VAR_8.s.time_grn*3),
                   VAR_6[VAR_11],
                   VAR_4[VAR_12],
                   (unsigned long long)VAR_9.cmn2.addresshi,
                   (unsigned long long)VAR_9.cmn2.addresslo);
                break;
            case 145:
            case 150:
            case 166:
            case 167:
            case 168:
            case 169:
            case 142:
            case 143:
            case 137:
            case 136:
            case 133:
            case 132:
            case 131:
            case 135:


                if (FUNC_0(VAR_3))
                {
                    if (VAR_9.store2.source <= 7)
                    {
                        VAR_12 = VAR_7 + (VAR_9.store2.source * 4);
                        if (VAR_12 >= 16)
                            VAR_12 += 16;
                    }
                    else
                        VAR_12 = VAR_9.store2.source;
                }
                else
                        VAR_12 = VAR_9.store2.source;

                FUNC_1("0x%016llx%016llx %c%+10d %s %s mask=0x%02x 0x%016llx%llx\n",
                   (unsigned long long)VAR_9.u128.datahi, (unsigned long long)VAR_9.u128.data,
                   (VAR_9.cmn2.discontinuity) ? 'D' : ' ',
                   VAR_9.cmn2.timestamp << (VAR_8.s.time_grn*3),
                   VAR_6[VAR_11],
                   VAR_4[VAR_12],
                   (unsigned int)VAR_9.store2.mask,
                   (unsigned long long)VAR_9.store2.addresshi,
                   (unsigned long long)VAR_9.store2.addresslo);
                break;
            case 153:
            case 154:
            case 155:
            case 152:
            case 157:
            case 158:
            case 159:
            case 156:


                if (FUNC_0(VAR_3))
                {
                    if (VAR_9.iobld2.source <= 7)
                    {
                        VAR_12 = VAR_7 + (VAR_9.iobld2.source * 4);
                        if (VAR_12 >= 16)
                            VAR_12 += 16;
                    }
                    else
                        VAR_12 = VAR_9.iobld2.source;
                }
                else
                        VAR_12 = VAR_9.iobld2.source;

                FUNC_1("0x%016llx%016llx %c%+10d %s %s->%s subdid=0x%x 0x%016llx%llx\n",
                   (unsigned long long)VAR_9.u128.datahi, (unsigned long long)VAR_9.u128.data,
                   (VAR_9.cmn2.discontinuity) ? 'D' : ' ',
                   VAR_9.cmn2.timestamp << (VAR_8.s.time_grn*3),
                   VAR_6[VAR_11],
                   VAR_4[VAR_12],
                   VAR_0[VAR_9.iobld2.dest],
                   (unsigned int)VAR_9.iobld2.subid,
                   (unsigned long long)VAR_9.iobld2.addresshi,
                   (unsigned long long)VAR_9.iobld2.addresslo);
                break;
            case 160:


                if (FUNC_0(VAR_3))
                {
                    if (VAR_9.iob2.source <= 7)
                    {
                        VAR_12 = VAR_7 + (VAR_9.iob2.source * 4);
                        if (VAR_12 >= 16)
                            VAR_12 += 16;
                    }
                    else
                        VAR_12 = VAR_9.iob2.source;
                }
                else
                        VAR_12 = VAR_9.iob2.source;

                FUNC_1("0x%016llx%016llx %c%+10d %s %s->%s len=0x%x 0x%016llx%llx\n",
                   (unsigned long long)VAR_9.u128.datahi, (unsigned long long)VAR_9.u128.data,
                   (VAR_9.iob2.discontinuity) ? 'D' : ' ',
                   VAR_9.iob2.timestamp << (VAR_8.s.time_grn*3),
                   VAR_6[VAR_11],
                   VAR_4[VAR_12],
                   VAR_0[VAR_9.iob2.dest],
                   (unsigned int)VAR_9.iob2.mask,
                   (unsigned long long)VAR_9.iob2.addresshi << 3,
                   (unsigned long long)VAR_9.iob2.addresslo << 3);
                break;
            default:
                FUNC_1("0x%016llx%016llx %c%+10d Unknown format\n",
                   (unsigned long long)VAR_9.u128.datahi, (unsigned long long)VAR_9.u128.data,
                   (VAR_9.cmn2.discontinuity) ? 'D' : ' ',
                   VAR_9.cmn2.timestamp << (VAR_8.s.time_grn*3));
                break;
        }
    }
}
