
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_92__ TYPE_86__ ;
typedef struct TYPE_91__ TYPE_5__ ;
typedef struct TYPE_90__ TYPE_4__ ;
typedef struct TYPE_89__ TYPE_3__ ;
typedef struct TYPE_88__ TYPE_2__ ;
typedef struct TYPE_87__ TYPE_1__ ;


typedef int UINT8 ;
struct TYPE_87__ {int Integer; } ;
struct TYPE_88__ {int ParseOpcode; char* ParseOpName; int Extra; int FinalAmlLength; TYPE_1__ Value; int CompileFlags; } ;
struct TYPE_92__ {TYPE_2__ Asl; } ;
struct TYPE_91__ {int DescriptorType; } ;
struct TYPE_90__ {TYPE_86__* DescriptorTypeOp; int CurrentByteOffset; } ;
struct TYPE_89__ {scalar_t__ Buffer; int BufferLength; } ;
typedef TYPE_3__ ASL_RESOURCE_NODE ;
typedef TYPE_4__ ASL_RESOURCE_INFO ;
typedef TYPE_5__ AML_RESOURCE ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,TYPE_86__*,int *) ;
 int VAR_3 ;
 TYPE_3__* FUNC_1 (TYPE_4__*) ;
 TYPE_3__* FUNC_2 (TYPE_4__*) ;
 TYPE_3__* FUNC_3 (TYPE_4__*) ;
 TYPE_3__* FUNC_4 (TYPE_4__*) ;
 TYPE_3__* FUNC_5 (TYPE_4__*) ;
 TYPE_3__* FUNC_6 (TYPE_4__*) ;
 TYPE_3__* FUNC_7 (TYPE_4__*) ;
 TYPE_3__* FUNC_8 (TYPE_4__*) ;
 TYPE_3__* FUNC_9 (TYPE_4__*) ;
 TYPE_3__* FUNC_10 (TYPE_4__*) ;
 TYPE_3__* FUNC_11 (TYPE_4__*) ;
 TYPE_3__* FUNC_12 (TYPE_4__*) ;
 TYPE_3__* FUNC_13 (TYPE_4__*) ;
 TYPE_3__* FUNC_14 (TYPE_4__*) ;
 TYPE_3__* FUNC_15 (TYPE_4__*) ;
 TYPE_3__* FUNC_16 (TYPE_4__*) ;
 TYPE_3__* FUNC_17 (TYPE_4__*) ;
 TYPE_3__* FUNC_18 (TYPE_4__*) ;
 TYPE_3__* FUNC_19 (TYPE_4__*) ;
 TYPE_3__* FUNC_20 (TYPE_4__*) ;
 TYPE_3__* FUNC_21 (TYPE_4__*) ;
 TYPE_3__* FUNC_22 (TYPE_4__*) ;
 TYPE_3__* FUNC_23 (TYPE_4__*) ;
 TYPE_3__* FUNC_24 (TYPE_4__*) ;
 TYPE_3__* FUNC_25 (TYPE_4__*) ;
 TYPE_3__* FUNC_26 (TYPE_4__*) ;
 TYPE_3__* FUNC_27 (TYPE_4__*) ;
 TYPE_3__* FUNC_28 (TYPE_4__*) ;
 TYPE_3__* FUNC_29 (TYPE_4__*) ;
 TYPE_3__* FUNC_30 (TYPE_4__*) ;
 TYPE_3__* FUNC_31 (TYPE_4__*) ;
 TYPE_3__* FUNC_32 (TYPE_4__*) ;
 TYPE_3__* FUNC_33 (TYPE_4__*) ;
 TYPE_3__* FUNC_34 (TYPE_4__*) ;
 TYPE_3__* FUNC_35 (TYPE_4__*) ;
 TYPE_3__* FUNC_36 (TYPE_4__*) ;
 TYPE_3__* FUNC_37 (TYPE_4__*) ;
 TYPE_3__* FUNC_38 (TYPE_4__*) ;
 TYPE_3__* FUNC_39 (TYPE_4__*) ;
 int FUNC_40 (char*,char*) ;

ASL_RESOURCE_NODE *
FUNC_41 (
    ASL_RESOURCE_INFO *VAR_4,
    UINT8 *VAR_5)
{
    ASL_RESOURCE_NODE *VAR_6 = ((void*)0);




    switch (VAR_4->DescriptorTypeOp->Asl.ParseOpcode)
    {
    case 169:

        VAR_6 = FUNC_1 (VAR_4);
        break;

    case 160:

        VAR_6 = FUNC_10 (VAR_4);
        break;

    case 168:

        VAR_6 = FUNC_2 (VAR_4);
        break;

    case 167:

        VAR_6 = FUNC_3 (VAR_4);
        break;

    case 166:

        VAR_6 = FUNC_4 (VAR_4);
        break;

    case 165:

        switch (*VAR_5)
        {
        case 172:

            FUNC_0 (VAR_0, VAR_2,
                VAR_4->DescriptorTypeOp, ((void*)0));
            break;

        case 171:

            FUNC_0 (VAR_0, VAR_1,
                VAR_4->DescriptorTypeOp, ((void*)0));
            break;

        case 173:
        default:

            break;
        }

        *VAR_5 = 172;
        VAR_6 = FUNC_5 (VAR_4);
        break;

    case 164:

        VAR_6 = FUNC_6 (VAR_4);
        break;

    case 163:

        VAR_6 = FUNC_7 (VAR_4);
        break;

    case 162:

        VAR_6 = FUNC_8 (VAR_4);
        break;

    case 161:

        VAR_6 = FUNC_9 (VAR_4);
        break;

    case 159:

        VAR_6 = FUNC_11 (VAR_4);
        break;

    case 154:

        VAR_6 = FUNC_16 (VAR_4);
        break;

    case 153:

        VAR_6 = FUNC_17 (VAR_4);
        break;

    case 152:

        VAR_6 = FUNC_18 (VAR_4);
        break;

    case 151:

        VAR_6 = FUNC_19 (VAR_4);
        break;

    case 150:

        VAR_6 = FUNC_20 (VAR_4);
        break;

    case 149:

        VAR_6 = FUNC_21 (VAR_4);
        break;

    case 148:

        VAR_6 = FUNC_22 (VAR_4);
        break;

    case 142:

        VAR_6 = FUNC_28 (VAR_4);
        break;

    case 141:

        VAR_6 = FUNC_29 (VAR_4);
        break;

    case 140:

        VAR_6 = FUNC_30 (VAR_4);
        break;

    case 139:

        VAR_6 = FUNC_12 (VAR_4);
        break;

    case 136:

        switch (*VAR_5)
        {
        case 171:

            FUNC_0 (VAR_0, VAR_1,
                VAR_4->DescriptorTypeOp, ((void*)0));
            break;

        case 172:
        case 173:
        default:

            break;
        }

        *VAR_5 = 171;
        VAR_6 = FUNC_32 (VAR_4);
        *VAR_5 = 173;
        break;

    case 135:

        switch (*VAR_5)
        {
        case 171:

            FUNC_0 (VAR_0, VAR_1,
                VAR_4->DescriptorTypeOp, ((void*)0));
            break;

        case 172:
        case 173:
        default:

            break;
        }

        *VAR_5 = 171;
        VAR_6 = FUNC_33 (VAR_4);
        *VAR_5 = 173;
        break;

    case 132:

        VAR_6 = FUNC_35 (VAR_4);
        break;

    case 131:

        VAR_6 = FUNC_36 (VAR_4);
        break;

    case 130:

        VAR_6 = FUNC_37 (VAR_4);
        break;

    case 129:

        VAR_6 = FUNC_38 (VAR_4);
        break;

    case 128:

        VAR_6 = FUNC_39 (VAR_4);
        break;

    case 158:

        VAR_6 = FUNC_13 (VAR_4);
        break;

    case 157:

        VAR_6 = FUNC_14 (VAR_4);
        break;

    case 156:
    case 155:

        VAR_6 = FUNC_15 (VAR_4);
        break;

    case 138:
    case 137:

        VAR_6 = FUNC_31 (VAR_4);
        break;

    case 134:
    case 133:

        VAR_6 = FUNC_34 (VAR_4);
        break;

    case 147:

        VAR_6 = FUNC_23 (VAR_4);
        break;

    case 146:

        VAR_6 = FUNC_24 (VAR_4);
        break;

    case 145:

        VAR_6 = FUNC_26 (VAR_4);
        break;

    case 143:

        VAR_6 = FUNC_27 (VAR_4);
        break;

    case 144:

        VAR_6 = FUNC_25 (VAR_4);
        break;

    case 170:


        break;

    default:

        FUNC_40 ("Unknown resource descriptor type [%s]\n",
            VAR_4->DescriptorTypeOp->Asl.ParseOpName);
        break;
    }






    VAR_4->DescriptorTypeOp->Asl.ParseOpcode = 170;
    VAR_4->DescriptorTypeOp->Asl.CompileFlags = VAR_3;
    VAR_4->DescriptorTypeOp->Asl.Value.Integer = VAR_4->CurrentByteOffset;

    if (VAR_6)
    {
        VAR_4->DescriptorTypeOp->Asl.FinalAmlLength = VAR_6->BufferLength;
        VAR_4->DescriptorTypeOp->Asl.Extra =
            ((AML_RESOURCE *) VAR_6->Buffer)->DescriptorType;
    }

    return (VAR_6);
}
