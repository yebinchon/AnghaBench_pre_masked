
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t U32 ;
struct TYPE_8__ {size_t completion_queue_get; size_t* completion_queue; } ;
typedef TYPE_1__ SCIC_SDS_CONTROLLER_T ;


 scalar_t__ FUNC_0 (size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,size_t,size_t) ;
 int FUNC_2 (TYPE_1__*,size_t,size_t) ;
 size_t FUNC_3 (size_t) ;
 size_t FUNC_4 (size_t) ;
 scalar_t__ FUNC_5 (size_t) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;





 int FUNC_8 (size_t) ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t FUNC_9 (int ) ;
 size_t FUNC_10 (int ,size_t) ;
 int FUNC_11 (TYPE_1__*,size_t) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*,size_t) ;

__attribute__((used)) static
void FUNC_14(
   SCIC_SDS_CONTROLLER_T * VAR_8
)
{
   U32 VAR_9 = 0;
   U32 VAR_10;
   U32 VAR_11;
   U32 VAR_12;
   U32 VAR_13;
   U32 VAR_14;

   FUNC_6((
      FUNC_12(VAR_8),
      VAR_5,
      "scic_sds_controller_transitioned_process_completions(0x%x) enter\n",
      VAR_8
   ));

   FUNC_6((
      FUNC_12(VAR_8),
      VAR_4,
      "completion queue beginning get : 0x%08x\n",
      VAR_8->completion_queue_get
   ));


   VAR_11 = FUNC_4(VAR_8->completion_queue_get);
   VAR_12 = VAR_6 & VAR_8->completion_queue_get;

   VAR_13 = FUNC_3(VAR_8->completion_queue_get);
   VAR_14 = VAR_7 & VAR_8->completion_queue_get;

   while (
               FUNC_5(VAR_12)
            == FUNC_0(
                  VAR_8->completion_queue[VAR_11])
         )
   {
      VAR_9++;

      VAR_10 = VAR_8->completion_queue[VAR_11];
      FUNC_1(VAR_8, VAR_11, VAR_12);

      FUNC_6((
         FUNC_12(VAR_8),
         VAR_4,
         "completion queue entry : 0x%08x\n",
         VAR_10
      ));

      switch (FUNC_8(VAR_10))
      {
      case 129:
         FUNC_13(VAR_8, VAR_10);
      break;

      case 131:
         FUNC_2(VAR_8, VAR_13, VAR_14);


      case 132:
      case 130:
      case 128:
      default:
         FUNC_7((
            FUNC_12(VAR_8),
            VAR_5,
            "SCIC Controller ignoring completion type %x\n",
            VAR_10
         ));
      break;
      }
   }


   if (VAR_9 > 0)
   {
      VAR_8->completion_queue_get =
           FUNC_9(VAR_0)
         | FUNC_9(VAR_1)
         | VAR_14 | FUNC_10(VAR_2, VAR_13)
         | VAR_12 | FUNC_10(VAR_3, VAR_11) ;

      FUNC_11(VAR_8, VAR_8->completion_queue_get);
   }

   FUNC_6((
      FUNC_12(VAR_8),
      VAR_4,
      "completion queue ending get : 0x%08x\n",
      VAR_8->completion_queue_get
   ));
}
